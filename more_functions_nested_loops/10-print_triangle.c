#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters
 * @size: size of the triangle
 *
 * Description: This function prints a triangle made of '#' characters.
 *              The triangle's height is determined by the size parameter.
 *              If size is 0 or negative, it prints only a new line.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
			_putchar(' ');

		for (j = 0; j <= i; j++)
			_putchar('#');

		_putchar('\n');
	}
}

int main(void)
{
	print_triangle(0);
	print_triangle(-10);
	print_triangle(3);
	print_triangle(9);
	print_triangle(98);

	return (0);
}