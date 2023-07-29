// main.c
#include <stdio.h>
#include "u_handler.c"
#include "o_handler.c"
#include "x_handler.c"
#include "X_handler.c"

int main() {
    unsigned int num = 42;

    char conversion_specifier = 'u'; // Change this to 'o', 'x', or 'X' for different conversions

    switch (conversion_specifier) {
        case 'u':
            print_u(num);
            break;
        case 'o':
            print_o(num);
            break;
        case 'x':
            print_x(num);
            break;
        case 'X':
            print_X(num);
            break;
        default:
            printf("Invalid conversion specifier\n");
    }

    printf("\n");

    return 0;
}

