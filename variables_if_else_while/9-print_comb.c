#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * separated by ", " using only the putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 0; i < 9; i++)
    {
        putchar(i + '0');
        write(1, ", ", 2);
    }
    putchar('9');

    return (0);
}
