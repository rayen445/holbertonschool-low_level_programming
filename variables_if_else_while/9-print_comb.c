#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit Numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int Number;

	for (Number = 0; Number <= 9; Number++)
	{
		putchar((Number % 10) + '0');
		if (Number == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
