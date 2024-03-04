#include "main.h"

/**
 * main - prints the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    (void)argv; /* Prevent unused parameter warning */
    _putcher(argc + '0');
    _putcher('\n');

    return (0);
}
