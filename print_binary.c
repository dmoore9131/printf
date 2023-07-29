#include "main.h"

/**
 * print_binary - Print the binary representation of an unsigned integer
 * @n: The unsigned integer to be printed as binary
 */
void print_binary(unsigned int n)
{
    if (n > 1)
        print_binary(n / 2);

    putchar((n & 1) + '0');
}

