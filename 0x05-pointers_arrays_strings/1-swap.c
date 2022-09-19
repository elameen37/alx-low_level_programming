#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: int pointer type
 * @b: int pointer type
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
