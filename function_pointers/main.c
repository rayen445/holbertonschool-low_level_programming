#include <stdio.h>
#include "function_pointers.h"

/* Function prototypes */
void print_elem(int elem);
void print_elem_hex(int elem);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    /* Call array_iterator with print_elem function */
    printf("Using print_elem:\n");
    array_iterator(array, 5, &print_elem);

    /* Call array_iterator with print_elem_hex function */
    printf("\nUsing print_elem_hex:\n");
    array_iterator(array, 5, &print_elem_hex);

    return (0);
}

/**
 * print_elem - Prints an integer
 * @elem: The integer to print
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - Prints an integer in hexadecimal format
 * @elem: The integer to print
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}
