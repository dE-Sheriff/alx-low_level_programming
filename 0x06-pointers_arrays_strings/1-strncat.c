#include "main.h"

/**
 * _strncat - concatenates two strings, but
 * it will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int b;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[x] = src[b];
	x++;
	b++;
	}
	dest[x] = '\0';
	return (dest);

}
