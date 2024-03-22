#include <stddef.h>

/**
 * int_index - searches for an integer.
 * @array: array to search through
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: zero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array == NULL || cmp == NULL || size <= 0)
        return -1;

    for (int i = 0; i < size; i++)
    {
        if (cmp(array[i]) != 0)
            return i;
    }

    return -1;
}
