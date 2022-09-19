#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: int pointer type
 * @b: int pointer type
 */
void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
