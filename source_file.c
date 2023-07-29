#include <stdio.h>
#include <stdarg.h>

#define BUFF_SIZE 100
#define UNUSED(x) (void)(x)

/************************* PRINT UNSIGNED NUMBER *************************/
/**
 * print_unsigned - Prints an unsigned number
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed.
 */
int print_unsigned(va_list types, char buffer[],
    int flags, int width, int precision, int size)
{
    int i = BUFF_SIZE - 2;
    unsigned long int num = va_arg(types, unsigned long int);

    // Placeholder implementation for demonstration purposes
    // You can modify this as per your requirements
    sprintf(buffer, "%lu", num);

    return 0; // Replace with actual number of characters printed
}

/************* PRINT UNSIGNED NUMBER IN OCTAL  ****************/
/**
 * print_octal - Prints an unsigned number in octal notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_octal(va_list types, char buffer[],
    int flags, int width, int precision, int size)
{
    int i = BUFF_SIZE - 2;
    unsigned long int num = va_arg(types, unsigned long int);

    // Placeholder implementation for demonstration purposes
    // You can modify this as per your requirements
    sprintf(buffer, "%lo", num);

    return 0; // Replace with actual number of characters printed
}

/************** PRINT UNSIGNED NUMBER IN HEXADECIMAL **************/
/**
 * print_hexadecimal - Prints an unsigned number in hexadecimal notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_hexadecimal(va_list types, char buffer[],
    int flags, int width, int precision, int size)
{
    int i = BUFF_SIZE - 2;
    unsigned long int num = va_arg(types, unsigned long int);

    // Placeholder implementation for demonstration purposes
    // You can modify this as per your requirements
    sprintf(buffer, "%lx", num);

    return 0; // Replace with actual number of characters printed
}

/************* PRINT UNSIGNED NUMBER IN UPPER HEXADECIMAL **************/
/**
 * print_hexa_upper - Prints an unsigned number in upper hexadecimal notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_hexa_upper(va_list types, char buffer[],
    int flags, int width, int precision, int size)
{
    int i = BUFF_SIZE - 2;
    unsigned long int num = va_arg(types, unsigned long int);

    // Placeholder implementation for demonstration purposes
    // You can modify this as per your requirements
    sprintf(buffer, "%lX", num);

    return 0; // Replace with actual number of characters printed
}

/************** PRINT HEXX NUM IN LOWER OR UPPER **************/
/**
 * print_hexa - Prints a hexadecimal number in lower or upper
 * @types: Lista of arguments
 * @map_to: Array of values to map the number to
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @flag_ch: Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * @size: Size specification
 * Return: Number of chars printed
 */
int print_hexa(va_list types, char map_to[], char buffer[],
    int flags, char flag_ch, int width, int precision, int size)
{
    int i = BUFF_SIZE - 2;
    unsigned long int num = va_arg(types, unsigned long int);

    // Placeholder implementation for demonstration purposes
    // You can modify this as per your requirements
    sprintf(buffer, "%lX", num);

    return 0; // Replace with actual number of characters printed
}

/************** PRINT UNSIGNED NUMBER IN BINARY **************/
/**
 * print_binary - Prints an unsigned number in binary notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_binary(va_list types, char buffer[],
    int flags, int width, int precision, int size)
{
    int i = BUFF_SIZE - 2;
    unsigned long int num = va_arg(types, unsigned long int);

    // Placeholder implementation for demonstration purposes
    // You can modify this as per your requirements
    sprintf(buffer, "%lu", num); // Convert to decimal first
    // Then convert decimal to binary
    unsigned long int binary = 0;
    int digit, place = 1;
    while (num != 0) {
        digit = num % 2;
        binary += digit * place;
        place *= 10;
        num /= 2;
    }
    sprintf(buffer, "%lu", binary);

    return 0; // Replace with actual number of characters printed
}

int main() {
    char buffer[BUFF_SIZE];

    // Call the print functions with appropriate arguments
    // ...

    return 0;
}

