#include "main.h"

/**
 *_memset - a function that fills memory with a constant byte.
 *@s: the memory
 *@b: the byte
 *@n: the number of times
 *Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while ((*s[i] != '\0') && i <= n)
	{
		if (*s[i] == " ")
			i++;
		else
		{
			*s[i] = b;
			i++
		}
	}
	return (*s)
}
