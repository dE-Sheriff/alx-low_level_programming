#include "lists.h"

/**
 * add_node - a function that adds
 * a new node at the beginning of a list_t list.
 * @head: pointer to new node
 * @str: the string to add
 * Return: size_t
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *add;

	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);
	while (str[len])
		len++;

	add->str = strdup(str);
	add->len = len;
	add->next = (*head);
	(*head) = add;
	return (*head);
}
