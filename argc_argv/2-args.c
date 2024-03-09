/*
 * File: 2-args.c
 * Auth: Julien Barbier
 * Desc: A program that prints all arguments it receives.
 */

#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the program command-line arguments
 *
 * Return: 0 if successful, otherwise a non-zero value
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
