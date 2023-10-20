#include "lists.h"

/**
 * add_node_end - a function that adds
 * a new node at the end of a list_t list.
 * @head: pointer to new node
 * @str: the string to add
 * Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);
	add->str = strdup(str);
	add->len = len;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = add;

	return (add);
}
