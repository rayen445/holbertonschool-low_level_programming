#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the program command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int count = 0;
    
    // Iterate through the argv array
    for (int i = 0; i < argc; i++)
    {
        count++;
    }

    printf("%d\n", count - 1); // Subtract 1 to exclude the program name
    return 0;
}
