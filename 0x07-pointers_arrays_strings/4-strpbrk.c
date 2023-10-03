#include "main.h"

/**
 *_strpbrk - a function that searches a
 *string for any of a set of bytes
 *@s: the character
 *@accept: character to find
 *Return: unsigned int
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

		while (*s)
		{
			for (x = 0; accept[x]; x++)
			{
			if (*s == accept[x])
			return (s);
			}
		s++;
		}

	return ('\0');

}
