#include "main.h"
#include <stddef.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: The string to modify
 *
 * Return: A pointer to the modified string
 */
char *string_toupper(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);

	ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= ('a' - 'A');
		ptr++;
	}

	return (str);
}
