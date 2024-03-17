#include <stdlib.h> /* For malloc */
#include <stdio.h>  /* For NULL definition */

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
  


    
    if (s1 == NULL)
        s1 = "";
 
    if (s2 == NULL)
        s2 = "";

    while (s1[s1_len])
        s1_len++;

    while (s2[s2_len])
        s2_len++;

    concat = malloc(sizeof(char) * (s1_len + n + 1));

   
    if (concat == NULL)
        return NULL;

    
    for (i = 0; i < s1_len; i++)
        concat[i] = s1[i];

    
    for (j = 0; j < n && j < s2_len; j++)
        concat[i++] = s2[j];

    
    concat[i] = '\0';




    return concat;
}
