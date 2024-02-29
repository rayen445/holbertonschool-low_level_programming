#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i = 98;
    int j = 1024;

    printf("%d * %d: %d\n", i, j, mul(i, j));

    i = -402;
    j = 4096;
    printf("%d * %d: %d\n", i, j, mul(i, j));

    return (0);
}
