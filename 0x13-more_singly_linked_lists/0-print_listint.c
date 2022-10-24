#include "lists.h"

/**
 * print_listint - Print all the elements of a list_int list
 * @h: data type pointer of struct
 * Return: elements of the str index
 */
size_t print_listint(const listint_t *h)
{
	unsigned int index = 0;
	const listint_t	 *new_node = h;

	for (; new_node; new_node = new_node->next)
	{
		printf("%d\n", new_node->n);
		index++;
	}
	return (index);
}
