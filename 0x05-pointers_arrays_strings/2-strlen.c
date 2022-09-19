#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: character type pointer
 *
 * Return: The length of @s.
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
