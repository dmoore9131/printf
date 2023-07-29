#include "main.h"

/**
 * _printf - Custom printf function with additional custom conversion specifiers
 * @format: The format string containing the text and conversion specifiers
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 'b':
                    print_binary(va_arg(args, unsigned int));
                    printed_chars += 1;
                    break;
                case '\0':
                    va_end(args);
                    return (-1); /* Unexpected end of format string */
                default:
                    putchar('%');
                    putchar(*format);
                    printed_chars += 2;
            }
        }
        else
        {
            putchar(*format);
            printed_chars++;
        }

        format++;
    }

    va_end(args);

    return (printed_chars);
}

