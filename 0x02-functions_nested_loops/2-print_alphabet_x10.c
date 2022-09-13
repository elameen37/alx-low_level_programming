#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase followed by a new line
 *
 * Return: 0 Always (Success)
 */
void print_alphabet_x10(void)
{
	int n, tn;

	tn = 0;

	while (tn < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		tn++;
		_putchar('\n');
	}
}
