#include "main.h"

/**
 * _strcpy - Copies a string including the null byte
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';  /* Append the null terminator */
	return (ptr);
}
