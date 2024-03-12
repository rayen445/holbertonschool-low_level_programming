#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    if (size == 0)
        return NULL;

    char *array = malloc(size * sizeof(char)); // Allocating memory for the array
    if (array == NULL)
        return NULL; // Return NULL if memory allocation fails

    for (unsigned int i = 0; i < size; ++i)
    {
        array[i] = c; // Initializing each element of the array with the specified character
    }

    return array; // Return the pointer to the allocated memory
}
