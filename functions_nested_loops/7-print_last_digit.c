#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_last_digit(98);
    r = print_last_digit(0);
    r = print_last_digit(-1024);
    r = print_last_digit(INT_MAX);
    r = print_last_digit(INT_MIN);
    r = print_last_digit(1);
    return (r);
}
