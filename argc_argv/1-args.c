#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the program command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
