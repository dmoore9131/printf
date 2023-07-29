#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Custom implementation of printf function
 * @format: Format string containing conversion specifiers
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    char c;
    char *str;

    va_start(args, format);

    while (*format)
    {
        if (*format != '%')
        {
            putchar(*format);
            count++;
        }
        else
        {
            format++;
            switch (*format)
            {
                case 'c':
                    c = va_arg(args, int);
                    putchar(c);
                    count++;
                    break;
                case 's':
                    str = va_arg(args, char *);
                    while (*str)
                    {
                        putchar(*str);
                        str++;
                        count++;
                    }
                    break;
                case '%':
                    putchar('%');
                    count++;
                    break;
                default:
                    putchar('%');
                    putchar(*format);
                    count += 2;
            }
        }
        format++;
    }

    va_end(args);
    return count;
}

