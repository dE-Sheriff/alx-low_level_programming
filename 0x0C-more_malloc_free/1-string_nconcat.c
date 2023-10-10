#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @n: the amount of memory
 * @s1: 1st string
 * @s2: second string
 * Return: char
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1x = 0, s2x = 0, a, b;
	char *s;

	while (s1[s1x] != '\0')
	{
		s1x++;
	}
	while (s2[s2x] != '\0' && s2x <= n)
	{
		s2x++;
	}
	if (n >= s2x)
		n = s2x;
	s = malloc(sizeof(char) * (s1x + s2x + 1));

	if (!s)
		return (NULL);
	for (a = 0; a <= s1x; a++)
		s[a] = s1[a];
	for (b = 0; a <= (s1x + n); b++)
	{
		a++;
		s[a] = s2[b];
	}
	return (s);
}
