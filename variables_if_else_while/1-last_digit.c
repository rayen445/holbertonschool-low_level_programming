#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Assigns a random number to n and prints its last digit
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(NULL));
    n = rand();

    printf("The string Last digit of %d is ", n);
    printf("%d ", abs(n) % 10);

    if (abs(n) % 10 > 5)
    {
        printf("and is greater than 5\n");
    }
    else if (abs(n) % 10 == 0)
    {
        printf("and is 0\n");
    }
    else
    {
        printf("and is less than 6 and not 0\n");
    }

    printf("\n"); // Adding new line here

    return (0);
}