/* File: 5-rev_string.c */

#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
    int length = 0;
    int i, j;
    char temp;

    /* Calculate the length of the string */
    while (s[length] != '\0')
        length++;

    /* Reverse the string */
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        /* Swap characters at positions i and j */
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
