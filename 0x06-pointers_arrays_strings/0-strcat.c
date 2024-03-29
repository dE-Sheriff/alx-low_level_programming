#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings overwriting the
 * terminating null byte at end of the first
 * @dest: first string
 * @src: second string
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
