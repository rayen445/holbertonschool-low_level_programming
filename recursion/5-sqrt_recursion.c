#include "main.h"

/**
 * sqrt_helper - helper function to calculate the square root recursively
 * @n: number whose square root is to be calculated
 * @i: iterator
 *
 * Return: the square root of n if it exists, otherwise -1
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose square root is to be calculated
 *
 * Return: the square root of n if it exists, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
