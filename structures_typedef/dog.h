#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the name of the owner of the dog
 *
 * Description: This structure represents a dog, including its name,
 * age, and the name of its owner.
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/* Function prototypes */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
