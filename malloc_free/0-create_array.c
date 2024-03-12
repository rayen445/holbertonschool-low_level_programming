#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @size: size of the array to be created
 * @c: character used to initialize the array
 *
 * Return: pointer to the allocated memory containing the array, or NULL if failed
 */
char *create_array(unsigned int size, char c)
{
    char *array;

    /* Check if size is 0 */
    if (size == 0)
        return NULL;

    /* Allocate memory for the array */
    array = malloc(size * sizeof(char));
    /* Check if allocation failed */
    if (array == NULL)
        return NULL;

    /* Initialize the array with the specified character */
    unsigned int i;
    for (i = 0; i < size; ++i)
    {
        array[i] = c;
    }

    return array;
}
