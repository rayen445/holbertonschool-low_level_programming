#include "main.h"

int main(void)
{
    print_last_digit(98);
    print_last_digit(0);
    int r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
