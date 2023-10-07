#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all
 * the arguments of your program 
 * @ac: the 1st string
 * @av: the string
 * Return: int
 */

char *argstostr(int ac, char **av)
{
	int x, n, a = 0, b = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (n = 0; av[i][n]; n++)
			b++;
	}
	b += ac;

	str = malloc(sizeof(char) * b + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (n = 0; av[x][n]; n++)
	{
		str[a] = av[x][n];
		a++;
	}
	if (str[a] == '\0')
	{
		str[a++] = '\n';
	}
	}
	return (str);
}
