#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher
 * @str: The string to encode
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13_alpha = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*ptr != '\0')
	{
		int i = 0;

		while (alpha[i] != '\0')
		{
			if (*ptr == alpha[i])
			{
				*ptr = rot13_alpha[i];
				break;
			}
			i++;
		}
		ptr++;
	}

	return (str);
}
