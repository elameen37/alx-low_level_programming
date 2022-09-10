#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 * print all letters except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowc, e, q;

	e = 'e';
	q = 'q';

	for (lowc = 'a'; lowc <= 'z'; lowc++)
	{
		if (lowc != e && lowc != q)
		putchar(lowc);
	}
		putchar('\n');

	return (0);
}
