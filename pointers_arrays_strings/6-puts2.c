#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char *str = "Lorem ipsum...";

    puts2(str);
    return (0);
}

/**
 * puts2 - Prints every other character of a string, starting with the first
 * @str: The string to print
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i += 2; /* Skip every other character */
    }
    _putchar('\n');
}
