#include "main.h"

int main(void)
{
    int len;

    len = _printf("Hello, %c! This is a %s test %%\n", 'W', "printf");
    _printf("Number of characters printed: %d\n", len);

    return (0);
}

