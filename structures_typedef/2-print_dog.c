#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog variable to print
 *
 * Description: This function prints the contents of a struct dog variable.
 *              If any element of the struct is NULL, it prints (nil) instead.
 */
void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
        printf("Age: %.6f\n", d->age);
        printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
    }
}
