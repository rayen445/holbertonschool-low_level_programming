#include "dog.h"
#include <stdlib.h> /* For malloc */
#include <string.h> /* For strcpy */

/**
 * new_dog - Creates a new dog with specified attributes
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * @name_len: Length of the name string
 * @owner_len: Length of the owner string
 *
 * Return: Pointer to the new dog, or NULL if malloc fails
 */
dog_t *new_dog(char *name, float age, char *owner, size_t name_len, size_t owner_len)
{
    dog_t *new_dog;
    char *new_name, *new_owner;

    /* Check if name or owner is NULL */
    if (name == NULL || owner == NULL)
        return NULL;

    /* Allocate memory for the dog structure */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    /* Allocate memory for the name and owner strings */
    new_name = malloc(sizeof(char) * (name_len + 1));
    new_owner = malloc(sizeof(char) * (owner_len + 1));

    /* Check if allocation failed */
    if (new_name == NULL || new_owner == NULL) {
        free(new_name);
        free(new_owner);
        free(new_dog);
        return NULL;
    }

    /* Copy the name and owner strings */
    strcpy(new_name, name);
    strcpy(new_owner, owner);

    new_dog->name = new_name;
    new_dog->age = age;
    new_dog->owner = new_owner;

    return new_dog;
}
