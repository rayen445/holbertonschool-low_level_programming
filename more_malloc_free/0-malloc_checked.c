#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - ALLocated memory using malloc 
 * @b: the amount of memory to allocate
 * 
 * Return: A pointer to the alloucated memory
*/
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc (b);
    if (ptr == NULL)
    {
        exit(98);
    }
    return ptr;
}