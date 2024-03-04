#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to the power of y
 * @x: the base number
 * @y: the power to raise x to
 *
 * Return: the result of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
