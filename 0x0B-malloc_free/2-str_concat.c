#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: the 1st string
 * @s2: the 2nd string
 * Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *arrc;
	int x = 0;
	int a, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	a = 0;

	while (s2[a] != '\0')
		a++;
	i = x + a;

	arrc = malloc(sizeof(char) * (i + 1));
	if (arrc == NULL)
		return (NULL);
	x = a = 0;
	while (s1[x] != '\0')
	{
		arrc[x] = s1[x];
		x++;
	}

	while (s2[a] != '\0')
	{
		arrc[x] = s2[a];
		x++, a++;
	}
	arrc[x] = '\0';
	return (arrc);
}
