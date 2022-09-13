#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to ptint
 *
 * Return: 1 Always (Success)
 * on error, -1 is returned and errno is set approximately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
