#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    /* Unused variable (void cast to prevent compiler warning) */
    (void)argc;

    printf("%d\n", argc - 1);
    return (0);
}
