#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - operator
 * @a: first int
 * @b: second int
 * Return: sum numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - operator
 * @a: first in
 * @b: second int
 * Return: difference numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product numbers
 * @a: first int
 * @b: second int
 * Return: product numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division numbers
 * @a: first int
 * @b: second int
 * Return: result numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - get remainder of numbers
 * @a: first int
 * @b: second int
 * Return: remainder numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
