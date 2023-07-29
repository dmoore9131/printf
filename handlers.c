#include <stdarg.h>
#include "main.h"

int handle_S(va_list args)
{
    int printed_chars = 0;
    char *str = va_arg(args, char*);

    if (str == NULL)
    {
        printed_chars += buffered_write("(null)", 6);
        return printed_chars;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] < 32 || str[i] >= 127)
        {
            printed_chars += buffered_write("\\x", 2);
            printed_chars += _putchar((str[i] / 16) + '0');
            printed_chars += _putchar((str[i] % 16) < 10 ? (str[i] % 16) + '0' : (str[i] % 16) - 10 + 'A');
        }
        else
        {
            printed_chars += _putchar(str[i]);
        }
    }

    return printed_chars;
}

