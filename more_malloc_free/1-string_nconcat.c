#include "main.h"
#include <stdlib.h> // For malloc
#include <stdio.h>  // For NULL definition

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes of s2 to concatenate
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int s1_len = 0, s2_len = 0, i, j;
    char *concat;

    // If s1 is NULL, treat it as an empty string
    if (s1 == NULL)
        s1 = "";
    
    // If s2 is NULL, treat it as an empty string
    if (s2 == NULL)
        s2 = "";

    // Calculate the length of s1
    while (s1[s1_len])
        s1_len++;

    // Calculate the length of s2
    while (s2[s2_len])
        s2_len++;

    // Allocate memory for the concatenated string
    concat = malloc(sizeof(char) * (s1_len + n + 1));

    // Check if allocation failed
    if (concat == NULL)
        return (NULL);

    // Copy characters from s1 to concat
    for (i = 0; i < s1_len; i++)
        concat[i] = s1[i];

    // Concatenate characters from s2 up to n or its entire length if n is greater than s2's length
    for (j = 0; j < n && j < s2_len; j++)
        concat[i++] = s2[j];

    // Null-terminate the concatenated string
    concat[i] = '\0';

    return concat;
}
