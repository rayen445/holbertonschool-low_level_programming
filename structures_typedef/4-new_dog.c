#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new dog - creates a new dog
 * @name: name of the dog 
 * @Age: Age of the dog
 * @owner: of the dog
 * 
 * Returne: pointer to the newly created dog, or NULL if failed
*/
dog_t *new_dog (char *name, float age, char *owner)
{
    dog_t *new_dog;

    /* Allocate memory for the dog structure */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
    return NULL;

    /* Allocate memory for the name and owner string */
    new_dog->name = malloc(strlen(name) + 1);
    if (new_dog->name == NULL)
    {
        free (new_dog);
        return NULL;
    }
    new_dog->owner = malloc(strlen(name) + 1);
    if (new_dog->owner == NULL)
    {
        free (new_dog->name);
        return NULL;
    }   
    /*copy the name and owner string*/
    strcpy (new_dog->name, name);
    strcpy (new_dog->owner, owner);

    /*set the age*/
    new_dog->age = age;
    
    
    
    
    
    
    return new_dog;



}