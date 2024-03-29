#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Ghost", 4.75, "Jon Snow");
    if (my_dog == NULL)
    {
        printf("Failed to create a new dog\n");
        return 1;
    }

    printf("My dog's name is %s, and he is %.2f years old\n", my_dog->name, my_dog->age);

    // Free the allocated memory
    free(my_dog->name);
    free(my_dog->owner);
    free(my_dog);

    return 0;
}
