#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
int Number;

	for (Number = 0; Number < 10; Number++)
		printf("%d", Number);
	printf("\n");
	return (0);
}
