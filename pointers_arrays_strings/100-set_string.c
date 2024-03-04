#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the pointer to be updated
 * @to: pointer to the string to set the pointer to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
