#include "main.h"

/**
 * _strdup - a function that returns
 * a pointer to a newly allocated space in memory
 * @str: the string
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	char *arrc;
	int x = 0;

	if (str == NULL)
		return (NULL)
	while (str[x] != '\0')
		x++;
	arrc = malloc(sizeof(char) * (x + 1));
	if (arrc == NULL)
		return (NULL);
	int a;

	for (a = 0; str[a]; a++)
		arrc[a] = str[a];

	return (arrc);
}
