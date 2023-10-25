#include "lists.h"

/**
 * insert_nodeint_at_index -  a function that
 * inserts a new node at a given position
 * @head: - head of list
 * @idx:  the index of the list where the new node should be added.
 * @n: new data
 * Return: int
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i;
	listint_t *new_list;

	new_list = malloc(sizeof(listint_t));
	if (new_list ==  NULL)
	{
		return (NULL);
	}

	new_list->n = n;

	if (idx == 0)
	{
		new_list->next = *head;
		*head = new_list;

		return (new_list);
	}

	for (i = 0; *head != NULL; i++)
	{
		if (i + 1 == (int) idx)
		{
			new_list->next = (*head)->next;

			(*head)->next = new_list;

			return (new_list);
		}

		head = &(*head)->next;
	}

	return (NULL);
}
