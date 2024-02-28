#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Number of times the character '_' should be printed
 */
void print_line(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    while (n--)
    {
        _putchar('_');
    }
    _putchar('\n');
}
