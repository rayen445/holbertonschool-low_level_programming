#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 * @str: The string to print
 *
 * Description: This function prints every other character of the string `str`,
 * starting with the first character.
 */
void puts2(char *str)
{
    int i = 0;

    /* Loop through the string and print every other character */
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i += 2; /* Skip every other character */
    }

    _putchar('\n');
}
