#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase followed by a new line
 *
 * Return: 0 Always (Success)
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
