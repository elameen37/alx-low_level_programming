#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase, then in lowercase and followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);
	for (lowercase = 'A'; lowercase <= 'Z'; lowercase++)
		putchar(lowercase);
		putchar('\n');
    
	return (0);
}
