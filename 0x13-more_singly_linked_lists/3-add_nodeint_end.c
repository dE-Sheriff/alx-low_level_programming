#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at
 * the end of a listint_t list
 * @head: - head of new node
 * @n: address to next node
 * Return: listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *holder = *head;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{

		*head = add;
		return (add);
	}
	while (holder->next)
		holder = holder->next;
	holder->next = add;
	return (add);
}
