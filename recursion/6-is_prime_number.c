#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - helper function to check if a number is prime
 * @n: the number to check
 * @i: the current divisor being checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (i >= n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}
