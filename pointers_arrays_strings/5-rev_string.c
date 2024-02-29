#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
    int i, j;
    char temp;

    // Find the length of the string
    for (i = 0; s[i] != '\0'; i++)
        ;

    // i now holds the length of the string
    // Reverse the string
    for (j = 0; j < i / 2; j++)
    {
        temp = s[j];
        s[j] = s[i - j - 1];
        s[i - j - 1] = temp;
    }
}
