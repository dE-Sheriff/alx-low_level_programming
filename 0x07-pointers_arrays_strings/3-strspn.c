#include "main.h"

/**
 *_strspn - a function that gets the length of a prefix substring
 *@s: the character
 *@accept: character to find
 *Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				i++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
