#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the string containing the characters to match
 *
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *ptr_s, *ptr_accept;

	for (ptr_s = s; *ptr_s; ptr_s++)
	{
		for (ptr_accept = accept; *ptr_accept; ptr_accept++)
		{
			if (*ptr_s == *ptr_accept)
			{
				count++;
				break;
			}
		}
		if (!*ptr_accept)
			break;
	}

	return count;
}
