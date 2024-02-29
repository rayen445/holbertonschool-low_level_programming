#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
    int length = 0, c;
    char *begin, *end, temp;

    // Calculate the length of the string
    while (*(s + length) != '\0')
    {
        length++;
    }

    begin = s;
    end = s;

    // Move the end pointer to the last character of the string
    for (c = 0; c < length - 1; c++)
    {
        end++;
    }

    // Reverse the string by swapping characters from start and end positions
    for (c = 0; c < length / 2; c++)
    {
        temp = *end;
        *end = *begin;
        *begin = temp;

        // Move the pointers towards the center
        begin++;
        end--;
    }
}
