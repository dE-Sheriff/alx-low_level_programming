#include "main.h"
#include <stdlib.h>

/**
 * word_count - counts the number of words
 * @s: string to evaluate
 * Return: number of words
 */
int word_count(char *s)
{
	int flag, g, t;

	flag = 0;
	t = 0;

	for (g = 0; s[g] != '\0'; g++)
	{
		if (s[g] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			t++;
		}
	}

	return (g);
}

/**
 * strtow - a function that splits a string into words
 * @str: the string
 * Return: char
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
