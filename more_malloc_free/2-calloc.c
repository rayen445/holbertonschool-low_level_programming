#include "main.h"
#include <stdlib.h> // For malloc
#include <stdio.h>  // For NULL definition

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory, or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int i;
    unsigned int total_size;

    // Check for zero nmemb or size
    if (nmemb == 0 || size == 0)
        return NULL;

    // Calculate the total size to allocate
    total_size = nmemb * size;

    // Allocate memory
    ptr = malloc(total_size);

    // Check if allocation failed
    if (ptr == NULL)
        return NULL;

    // Initialize the allocated memory to zero
    for (i = 0; i < total_size; i++)
        *((char *)ptr + i) = 0;

    return ptr;
}
