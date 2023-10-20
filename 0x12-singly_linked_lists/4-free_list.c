#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: pointer to new node
 * Return: void
 */

void free_list(list_t *head)
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
