#include <unistd.h>

/**
 * _putcher - Writes a character to stdout
 * @c: The character to write
 *
 * Return: 1 on success, -1 on error
 */
int _putcher(char c)
{
	return (write(1, &c, 1) == 1 ? 1 : -1);
}
