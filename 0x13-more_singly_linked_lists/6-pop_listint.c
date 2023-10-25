#include "lists.h"

/**
 * pop_listint - a function that frees a listint_t list.
 * @head: - head of list
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *holder;
	int x;

	if (head == NULL)
		return (0);
	x = (*head)->n;
	holder = (*head)->next;
	free(*head);
	*head = holder;
	return (x);
}
