#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the string containing the characters to match
 *
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int match;

    while (*s)
    {
        match = 0;
        char *tmp = accept;
        while (*tmp)
        {
            if (*s == *tmp)
            {
                match = 1;
                count++;
                break;
            }
            tmp++;
        }
        if (match == 0)
            break;
        s++;
    }
    return count;
}
