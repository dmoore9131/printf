#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char buffer[1024] = {0};

    printf("print_unsigned: %d\n", print_unsigned(123, buffer, 0, 0, 0));
    printf("print_octal: %d\n", print_octal(123, buffer, 0, 0, 0));
    printf("print_hexadecimal: %d\n", print_hexadecimal(123, buffer, 0, 0, 0));
    printf("print_hexa: %d\n", print_hexa(123, "0123456789abcdef", buffer, 0, 'x', 0, 0));

    return (0);
}

