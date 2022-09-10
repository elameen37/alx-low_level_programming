#include <stdio.h>

/**
 * Prints alphabets in lowercase followed by a new line
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	
	putchar(lowercase);
	putchar('\n');

	return (0);
}
