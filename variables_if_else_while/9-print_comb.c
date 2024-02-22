#include <unistd.h>

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

    for (i = 0; i <= 9; i++)
    {
        putchar(i + '0');
        if (i != 9)
        {
            write(1, ", ", 2);
        }
    }

    return (0);
}
