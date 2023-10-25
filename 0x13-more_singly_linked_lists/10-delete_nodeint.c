#include "lists.h"

/**
 * delete_nodeint_at_index - a function that
 * deletes the node at index index of a listint_t linked list
 * @head: - head of list
 * @index: index of the node, starting at 0
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *holder = *head;
	listint_t *node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(holder);
		return (1);
	}
	while (i < index - 1)
	{
		if (!holder || !(holder->next))
			return (-1);
		holder = holder->next;
		i++;
 	}
	node = holder->next;
	holder->next = node->next;
	free(node);
	return (1);
}

