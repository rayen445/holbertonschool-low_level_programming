#include <stdlib.h> /* For malloc */
#include <stdio.h>  /* For NULL definition */

/**
 * array_range - Creates an array of integers from min to max
 * @min: The minimum value (inclusive)
 * @max: The maximum value (inclusive)
 *
 * Return: Pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
    int *arr;
    int size, i;

    /* Check if min is greater than max */
    if (min > max)
        return NULL;

    /* Calculate the size of the array */
    size = max - min + 1;

    /* Allocate memory for the array */
    arr = malloc(sizeof(int) * size);

    /* Check if allocation failed */
    if (arr == NULL)
        return NULL;

    /* Populate the array with values from min to max */
    for (i = 0; i < size; i++)
        arr[i] = min++;

    return arr;
}
