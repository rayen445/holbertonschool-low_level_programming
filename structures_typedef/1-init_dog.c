#include "dog.h"

/**
 * init_dog - initializes a vriable of type struct dog 
 * @: Pointer to the struct dog vriable to initialize
 * @name: Pointer to the string containin the name of dog
 * @age: age of the dog
 * @owner: Pointer to the string containing the owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner) 
{
    if (d !=NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
