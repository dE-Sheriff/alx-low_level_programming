#include "main.h"

/**
 *_strchr - a function that locates a character in a string.
 *@s: the character
 *@c: character to find
 *Return: char
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != c || s[i] != '\0')
	{
		i++;
	}
	return (&s[i]);
}
