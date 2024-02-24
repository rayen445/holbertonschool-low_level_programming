#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then in uppercase,
 *              followed by a new line, using only putchar function three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    /* Print lowercase alphabet */
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    /* Print uppercase alphabet */
    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        putchar(letter);
    }

    putchar('\n');  /* Print newline */

    return (0);
}
