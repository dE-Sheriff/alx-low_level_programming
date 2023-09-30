#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @n: second string
 * Return: char
 */

char *cap_string(char *n)
{
	int a;

	a = 0;
	while (n[a] != '\0')
	{
		if (n[a] == ' ')
		{
			a++;
			if ((n[a] >= 'a') && (n[a] <= 'z'))
			{
				n[a] = n[a] - 32;
			}
		}
		if ((n[1] >= 'a') && (n[1] <= 'z'))
		{
			n[1] = n[1] - 32;
		}
		a++;
	}
	return (n);
}
