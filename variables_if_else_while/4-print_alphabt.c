#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
char L;

	for (L = 'a'; L <= 'z'; L++)
	{
		if (L != 'e' && L != 'q')
			putchar(L);
	}
	putchar('\n');
	return (0);
}
