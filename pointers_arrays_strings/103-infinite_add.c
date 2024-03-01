#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: The first number to be added
 * @n2: The second number to be added
 * @r: The buffer that the function will use to store the result
 * @size_r: The buffer size
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, i, sum, carry = 0;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	r[size_r] = '\0';
	len1--;
	len2--;
	for (i = size_r - 1; len1 >= 0 || len2 >= 0; i--)
	{
		sum = (len1 >= 0 ? n1[len1] - '0' : 0) + (len2 >= 0 ? n2[len2] - '0' : 0) + carry;
		carry = sum / 10;
		r[i] = (sum % 10) + '0';
		len1--;
		len2--;
	}
	if (carry)
	{
		if (i == 0)
			return (0);
		r[--i] = carry + '0';
	}
	return (r + i);
}
