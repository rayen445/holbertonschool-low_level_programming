#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_map = "aAeEoOtTlL";
	char *leet_replace = "4433007711";

	while (*ptr != '\0')
	{
		int i = 0;

		while (leet_map[i] != '\0')
		{
			if (*ptr == leet_map[i])
				*ptr = leet_replace[i];
			i++;
		}
		ptr++;
	}

	return (str);
}
