#include "lists.h"

/**
 * list_len - a function that returns
 * the number of elements in a linked list_t list.
 * @h: the struct data to print its element
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		h = h->next;
		i++;
	}
	return (i);
}
