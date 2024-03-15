#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: structure containing information about a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

/* function prototype */
void print_dog(dog_t *d);

#endif /* DOG_H */
