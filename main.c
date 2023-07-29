#include <stdio.h>

void print_integer(int num) 
{
    printf("%d\n", num); /* Use %d for signed decimal integer */
}

int main(void) 
{
    int num;

    /* Get input from the user */
    printf("Enter an integer: ");
    scanf("%d", &num);

    /* Print the integer using both %d and %i conversion specifiers */
    printf("Using %%d: ");
    print_integer(num);

    printf("Using %%i: ");
    print_integer(num);

    return 0;
}

