#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: - head of list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *holder;

	while (head != NULL)
	{
		holder = head->next;
		free(head);
		head = holder;
	}
}
