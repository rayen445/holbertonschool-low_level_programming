#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the string containing the bytes to match
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr_s, *ptr_accept;

	for (ptr_s = s; *ptr_s; ptr_s++)
	{
		for (ptr_accept = accept; *ptr_accept; ptr_accept++)
		{
			if (*ptr_s == *ptr_accept)
				return (ptr_s);
		}
	}

	return (NULL);
}
