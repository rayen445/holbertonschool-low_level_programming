#include "dog.h"
#include <stdlib.h> // For malloc
#include <string.h> // For strlen, strcpy

/**
 * new_dog - Creates a new dog with specified attributes
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if malloc fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    // Check if name or owner is NULL
    if (name == NULL || owner == NULL)
        return NULL;

    // Calculate the lengths of name and owner
    size_t name_len = strlen(name);
    size_t owner_len = strlen(owner);

    // Declare variables
    dog_t *new_dog;
    char *new_name, *new_owner;

    // Allocate memory for the dog structure
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    // Allocate memory for the name and owner strings
    new_name = malloc(sizeof(char) * (name_len + 1));
    new_owner = malloc(sizeof(char) * (owner_len + 1));

    // Check if allocation failed
    if (new_name == NULL || new_owner == NULL) {
        free(new_name);
        free(new_owner);
        free(new_dog);
        return NULL;
    }

    // Copy the name and owner strings
    strcpy(new_name, name);
    strcpy(new_owner, owner);

    new_dog->name = new_name;
    new_dog->age = age;
    new_dog->owner = new_owner;

    return new_dog;
}
