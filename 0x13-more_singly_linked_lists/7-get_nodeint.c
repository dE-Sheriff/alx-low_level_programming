#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list
 * @head: - head of list
 * @index: index of the node, starting at 0
 * Return: int
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while ((head) && (count <= index))
	{
		if (count == index)
		{
			node = head;
			return (node);
		}
		count++;
	}
	return (NULL);
}
