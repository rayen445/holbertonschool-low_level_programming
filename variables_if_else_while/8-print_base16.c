#include <stdio.h>
/**
 * main - Prints all the Numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
int Number;
char letter;

	for (Number = 0; Number < 10; Number++)
		putchar((Number % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
