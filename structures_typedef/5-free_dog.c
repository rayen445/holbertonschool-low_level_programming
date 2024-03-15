#include "dog.h"
#include <stdlib.h>

/**
 * free dog - frees memory allcated for a dog structure 
 * @d: pointer to the dog structure to free 
*/
void free_dog(dog_t *d)
{
    if (d == NULL)
    return;

    /* free dynamically allocated memory for name and owner*/
    free (d->name);
    free (d->owner);
    free_dog(my_dog)

    /* free memory allocated for the dog structure */
    free(d);
}