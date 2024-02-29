#include "main.h"

/**
 * _strlen - Computes the length of a string
 * @s: The string to compute the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int i;

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (length + 1) / 2; i < length; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
