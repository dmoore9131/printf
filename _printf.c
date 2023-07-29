#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
    (void)format; // Suppress unused parameter warning

    int printed_chars = 0;
    va_list args;
    va_start(args, format);

    for (int i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 'S')
            {
                printed_chars += handle_S(args);
            }
            // Handle other conversion specifiers if needed
            // else if (format[i] == 'd') { ... }
            // else if (format[i] == 'c') { ... }
            // else if (format[i] == 's') { ... }
            // ...
            else
            {
                // Invalid conversion specifier, handle error if required
            }
        }
        else
        {
            printed_chars += _putchar(format[i]);
        }
    }

    va_end(args);
    return printed_chars;
}

