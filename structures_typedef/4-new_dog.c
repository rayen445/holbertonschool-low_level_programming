#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: If memory allocation fails or if any parameter is NULL, return NULL.
 *         Otherwise, return a pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    int name_len, owner_len;

    if (name == NULL || owner == NULL)
        return (NULL);

    /* Allocate memory for the dog structure */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /* Get the length of the name and owner strings */
    name_len = strlen(name);
    owner_len = strlen(owner);

    /* Allocate memory for the name string */
    new_dog->name = malloc(name_len + 1);
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    /* Allocate memory for the owner string */
    new_dog->owner = malloc(owner_len + 1);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }

    /* Copy the name and owner strings */
    strcpy(new_dog->name, name);
    strcpy(new_dog->owner, owner);

    /* Set the age of the dog */
    new_dog->age = age;

    return (new_dog);
}
