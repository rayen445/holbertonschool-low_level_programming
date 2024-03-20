#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a given printing function
 * @name: the name to  be printed
 * @f: pointer to the printing function
*/

void print_name(char *name, void (*f)(char *))
{
    if (name !=NULL && f !=NULL)
        f(name);
}