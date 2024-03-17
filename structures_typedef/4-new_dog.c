#include "dog.h"
#include <stdlib.h> 
#include <string.h> 

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

    if (name == NULL || owner == NULL)
        return NULL;

 
    size_t owner_len = strlen(owner);

   
    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    new_dog->name = malloc(sizeof(char) * (name_len + 1));
    new_dog->owner = malloc(sizeof(char) * (owner_len + 1));

    if (new_dog->name == NULL || new_dog->owner == NULL) {
        free(new_dog->name);
        free(new_dog->owner);
        free(new_dog);
        return NULL;
    }


    strcpy(new_dog->name, name);
    strcpy(new_dog->owner, owner);

    new_dog->age = age;

    return new_dog;
}
