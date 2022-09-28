#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (help(n, 1));
}

/**
 * help - helper function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrementer to compare against `c`
 * Return: square root if natural square root, or -1 if none found
 */

int help(int c, int i)
{
	int root;

	root = i * i;
	if (root == c)
		return (i);
	else if (root < c)
		return (help(c, i + 1));
	else
		return (-1);
}
