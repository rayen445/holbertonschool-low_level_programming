#include "main.h"
#include <stdlib.h> // Include for malloc
#include <stdio.h> // Include for printf
#include <stdlib.h> // Include for exit

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The amount of memory to allocate
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b); // Allocate memory

    if (ptr == NULL) // Check if malloc failed
    {
        printf("Error: malloc failed\n");
        exit(98); // Terminate the process with status 98
    }

    return ptr; // Return the allocated memory
}
