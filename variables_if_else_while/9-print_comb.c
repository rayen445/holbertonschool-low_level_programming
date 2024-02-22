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

    for (i = 0; i < 9; i++)
    {
        write(1, &i, 1);
        write(1, ", ", 2);
    }
    write(1, "9", 1);

    return (0);
}

