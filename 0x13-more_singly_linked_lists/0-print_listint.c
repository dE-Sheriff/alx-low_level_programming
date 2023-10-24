#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: - the linked list
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	int x;

	if (h == NULL)
		return (0);
	while (h)
	{
		x  = h->n;
		printf("%i\n", x);
		h = h->next;
		count++;
	}
	return (count);
}
