#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    // Skip whitespace characters
    while (s[i] == ' ')
        i++;

    // Check for sign character
    if (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }

    // Convert digits to integer
    while (s[i] >= '0' && s[i] <= '9') {
        // Check for integer overflow
        if (result > (INT_MAX / 10) || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10)) {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return sign * result;
}
