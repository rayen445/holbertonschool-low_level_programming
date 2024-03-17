#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if malloc fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog_ptr;
    int name_length = 0, owner_length = 0;
    int i;

    // Calculate the length of the name and owner strings
    while (name[name_length])
        name_length++;
    while (owner[owner_length])
        owner_length++;

    // Allocate memory for the new dog structure
    new_dog_ptr = malloc(sizeof(dog_t));
    if (new_dog_ptr == NULL)
        return (NULL);

    // Allocate memory for the name and owner strings
    new_dog_ptr->name = malloc(sizeof(char) * (name_length + 1));
    new_dog_ptr->owner = malloc(sizeof(char) * (owner_length + 1));

    // Check if memory allocation was successful
    if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
    {
        // Free previously allocated memory if one of the allocations fails
        free(new_dog_ptr->name);
        free(new_dog_ptr->owner);
        free(new_dog_ptr);
        return (NULL);
    }

    // Copy the name and owner strings
    for (i = 0; i <= name_length; i++)
        new_dog_ptr->name[i] = name[i];
    for (i = 0; i <= owner_length; i++)
        new_dog_ptr->owner[i] = owner[i];

    // Set the age of the new dog
    new_dog_ptr->age = age;

    // Return pointer to the newly created dog
    return (new_dog_ptr);
}
