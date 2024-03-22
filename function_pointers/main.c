#include <stdio.h>
#include "function_pointers.h"

/* Function prototypes */
int is_98(int elem);
int is_strictly_positive(int elem);
int abs_is_98(int elem);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;

    /* Test with is_98 function */
    printf("Using is_98 function:\n");
    index = int_index(array, 20, is_98);
    printf("Index of first occurrence of 98: %d\n", index);

    /* Test with abs_is_98 function */
    printf("\nUsing abs_is_98 function:\n");
    index = int_index(array, 20, abs_is_98);
    printf("Index of first occurrence of abs(98): %d\n", index);

    /* Test with is_strictly_positive function */
    printf("\nUsing is_strictly_positive function:\n");
    index = int_index(array, 20, is_strictly_positive);
    printf("Index of first strictly positive number: %d\n", index);

    return (0);
}

/**
 * is_98 - Checks if a number is equal to 98
 * @elem: The integer to check
 * Return: 1 if true, 0 otherwise
 */
int is_98(int elem)
{
    return (98 == elem);
}

/**
 * is_strictly_positive - Checks if a number is strictly positive
 * @elem: The integer to check
 * Return: 1 if true, 0 otherwise
 */
int is_strictly_positive(int elem)
{
    return (elem > 0);
}

/**
 * abs_is_98 - Checks if the absolute value of a number is 98
 * @elem: The integer to check
 * Return: 1 if true, 0 otherwise
 */
int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}
