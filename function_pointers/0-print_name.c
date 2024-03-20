#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name); /* Fixed the format specifier */
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
    unsigned int i; /* Fixed the typo */

    printf("Hello, my uppercase name is ");
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] >= 'a' && name[i] <= 'z') {
            putchar(name[i] + 'A' - 'a');
        } else {
            putchar(name[i]);
        }
    }
    putchar('\n');
}

/**
 * print_name - Prints a name using a given printing function
 * @name: The name to be printed
 * @f: Pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}
