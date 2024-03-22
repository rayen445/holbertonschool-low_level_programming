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
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
