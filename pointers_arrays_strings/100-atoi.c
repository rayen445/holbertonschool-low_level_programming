#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the converted string
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	/* Skip all leading non-digit characters */
	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Convert the number */
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
