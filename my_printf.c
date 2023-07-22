#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0; /* To keep track of characters */
    char ch;
    
    va_start(args, format);
    
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            /* Move to the next character after '%' */
            /* Handle conversion specifiers */
            switch (*format)
            {
                case 'c':
                    ch = va_arg(args, int);
                    putchar(ch);
                    count++;
                    break;
                case 's':
                    {
                        char *str = va_arg(args, char*);
                        while (*str)
                        {
                            putchar(*str);
                            str++;
                            count++;
                        }
                    }
                    break;
                case '%':
                    putchar('%');
                    count++;
                    break;
                default:
                    /* Ignore invalid conversion specifiers for simplicity */
                    break;
            }
        }
        else
        {
            putchar(*format);
            count++;
        }
        format++; /* Move to the next character in the format string */
    }
    va_end(args);
    return count;
}

int main(void)
{
    int num_char = _printf("Hello, %s! This is %c and %%.\n", "John", 'A');
    printf("Number of characters printed: %d\n", num_char);
    return 0;
}

