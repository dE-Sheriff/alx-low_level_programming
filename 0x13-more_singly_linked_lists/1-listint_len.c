#include "lists.h"

/**
 * listint_len - a function that prints all the elements of a listint_t list
 * @h: - the linked list
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
