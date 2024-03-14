#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog variable to initialize
 * @name: Pointer to the string containing the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the string containing the owner's name
 *
 * Description: This function initializes a struct dog variable with
 *              the provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
