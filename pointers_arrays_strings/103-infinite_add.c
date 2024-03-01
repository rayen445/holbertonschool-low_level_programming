#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: First number to add
 * @n2: Second number to add
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result or 0 if result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum;
	int i = 0, j = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);

	len1--;
	len2--;

	r[size_r - 1] = '\0';
	for (i = size_r - 2; i >= 0; i--)
	{
		sum = carry;
		if (len1 >= 0)
			sum += n1[len1--] - '0';
		if (len2 >= 0)
			sum += n2[len2--] - '0';

		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		r[i] = sum + '0';
	}
	if (carry == 1)
	{
		if (size_r == i + 1)
			return (0);
		r[i] = '1';
	}
	return (r + i);
}
