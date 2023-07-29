#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int main(void) {
    _printf("Hello, %s! This is a %c character: %c\n", "World", 'c', 'A');
    return 0;
}

int _printf(const char *format, ...) {
    int printed_chars = 0;

    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;

            // Handle conversion specifiers
            switch (*format) {
                case 'c': {
                    char c = va_arg(args, int);
                    putchar(c);
                    printed_chars++;
                    break;
                }
                case 's': {
                    const char *str = va_arg(args, const char*);
                    while (*str != '\0') {
                        putchar(*str);
                        str++;
                        printed_chars++;
                    }
                    break;
                }
                case '%': {
                    putchar('%');
                    printed_chars++;
                    break;
                }
                default:
                    break;
            }
        } else {
            putchar(*format);
            printed_chars++;
        }

        format++;
    }

    va_end(args);
    return printed_chars;
}

