#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
void print_binary(unsigned int n);
int print_unsigned(unsigned int num, char buffer[], int flags, int width, int precision);
int print_octal(unsigned int num, char buffer[], int flags, int width, int precision);
int print_hexadecimal(unsigned int num, char buffer[], int flags, int width, int precision);
int print_hexa(unsigned int num, char map_to[], char buffer[], int flags, char flag_ch, int width, int precision);

#endif /* MAIN_H */

