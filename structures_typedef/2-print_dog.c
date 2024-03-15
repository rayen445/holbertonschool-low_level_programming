#include <stdio.h>
#include "dog.h"

/*
* print dog - prints a struct dog
* @d pointer to the struct dog veriable to print
*
* description: this function print the contents of a struct dog veriable.
*              if any element of the sturct is NULL, it print (nil) instead.
*/
void print_dog(struct dog *d)
{
    if (d !=NULL)
    {
        printf("Name: %s\n", d->name !=NULL ? d->name : "(nil)");
        printf("Age: %.6f\n", d->age);
        printf("Owner: %s\n", d-> owner !=NULL ? d->owner : "(nil)");
    }



}
