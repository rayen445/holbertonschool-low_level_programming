#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success 1, on error -1
 */
void _putchar(char c)
{
    write(1, &c, 1);
}
