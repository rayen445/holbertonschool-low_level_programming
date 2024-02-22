#include <stdio.h>
/**
 * main - Prints all single digit Numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
int Number;

	for (Number = 0; Number < 10; Number++)
		putchar((Number % 10) + '0');
	putchar('\n');
	return (0);
}
