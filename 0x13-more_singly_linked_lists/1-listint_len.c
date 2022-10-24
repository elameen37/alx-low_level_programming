#include "lists.h"

/**
 * listint_len - Return the number of elements
 * @h: data type pointer of struct
 * Return: elements of the str count
 *  
 * */
size_t listint_len(const listint_t *h)
{
	const listint_t *c;
	size_t count;

	for (c = h, count = 0; c != NULL; count++, c = c->next)
		;

	return (count);
}
