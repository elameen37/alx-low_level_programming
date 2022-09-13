#include "main.h"
/**
 * main - print _putchar followed by a new line
 *
 * Return: 0 Always (Success)
 *
 */
int main(void)
{
	char *word = "_putchar";

	while (*word)
	{
		_putchar(*word);
		word++;
	}
	_putchar('\n');

	return (0);
}
