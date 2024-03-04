#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line recursively
 * @s: The string to be printed
 *
 * Description: This function prints the string `s` followed by a newline
 * character recursively.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }
    _putchar(*s);
    _puts_recursion(s + 1);
}
