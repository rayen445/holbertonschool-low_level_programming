#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a given printing function
 * @name: the name to  be printed
 * @f: pointer to the printing function
*/

void print_name_as_is(char *name)

{
    printf("hello, my name is %s\n");
}

void print_name_uppercase(char*name)
{
    unsigend int i;

    printf("hello, my uppercase name is");
    i=0;
    while (name[i])
    {
        if (naem[i] >= 'a' && name[i] <= 'z')
         {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}

int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Hodor", print_name_uppercase); 
    printf("\n");
    return (0);
}
