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
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* function prototype */
void print_dog(struct dog *d);

#endif /* DOG_H */
