#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to a char (string).
 * @to: Pointer to the string to be set.
 *
 * Description: This function sets the value of a pointer to a char to the value
 *              of another pointer to a char.
 */
void set_string(char **s, char *to)
{
    *s = to;
}
