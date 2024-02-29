/* File: 4-print_rev.c */

#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: The string to print
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	while (length > 0)
	{
		_putchar(s[length - 1]);
		length--;
	}
	_putchar('\n');
}
