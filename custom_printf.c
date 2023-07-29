#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);

void print_non_printable(char ch) {
    if (ch < 32 || ch >= 127) {
        printf("\\x%02X", (unsigned char)ch);
    } else {
        putchar(ch);
    }
}

int _printf(const char *format, ...) {
    va_list args;
    int count = 0;
    char ch;

    va_start(args, format);

    while (*format) {
        if (*format == '%') {
            format++;
            ch = *format;
            if (ch == 'S') {
                char *str = va_arg(args, char *);
                if (str == NULL) {
                    printf("(null)");
                } else {
                    while (*str) {
                        print_non_printable(*str);
                        str++;
                        count++;
                    }
                }
            } else {
                putchar('%');
                if (ch)
                    putchar(ch);
                else
                    break;
                count += 2;
            }
        } else {
            putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);

    return count;
}

int main(void) {
    char input[1000];
    char filename[100];

    printf("Enter the string: ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Error reading the string.\n");
        return 1;
    }

    printf("Enter the file name: ");
    if (fgets(filename, sizeof(filename), stdin) == NULL) {
        printf("Error reading the file name.\n");
        return 1;
    }

    /* Open the file for writing */
    FILE *file;
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    /* Write the modified string to the file */
    fprintf(file, "%s", input);

    /* Close the file */
    fclose(file);

    printf("String written to file successfully.\n");
    return 0;
}

