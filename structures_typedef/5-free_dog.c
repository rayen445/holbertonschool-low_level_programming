#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure to free
 */
void free_dog(dog_t *d)
{
    if (d == NULL)
        return;

    /* Free dynamically allocated memory for name and owner */
    free(d->name);
    free(d->owner);

    /* Free memory allocated for the dog structure */
    free(d);
}
