#include "main.h"
#include <stdlib.h> /* Include for malloc */
#include <stdio.h> /* Include for printf */
#include <stdlib.h> /* Include for exit */

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The amount of memory to allocate
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
    /* Allocate memory */
    void *ptr = malloc(b);

    /* Check if malloc failed */
    if (ptr == NULL) 
    {
        printf("Error: malloc failed\n");
        exit(98);
    }

    return ptr;
}
