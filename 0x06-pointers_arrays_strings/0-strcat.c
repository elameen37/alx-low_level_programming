#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int d, c;

	for (d = 0; dest[d] != '\0'; d++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[d] = src[c];
		i++;
	}

	dest[d] = '\0';
	return (dest);
}
