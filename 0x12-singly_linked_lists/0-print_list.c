#include "lists.h"

/**
 * print_list - Print all the elements of a list_t list
 * @h: data type pointer of struct
 * Return: elements of the str index
 */

size_t print_list(const list_t *h)
{
	size_t index;
	const list_t *tmp;

	index = 0;
	tmp = h;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			tmp = tmp->next;
			index++;
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
			tmp = tmp->next;
			index++;
		}
	}
	return (index);
}
