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
		if (!(n[0] >= 'a') && (n[0] <= 'z'))
		{
			while (!(n[0] >= 'a') && (n[0] <= 'z'))
			{
				a++;
			}
			if ((n[a] >= 'a') && (n[a] <= 'z'))
			{
				n[a] = n[a] - 32;
			}
		if ((n[0] >= 'a') && (n[0] <= 'z'))
		{
			n[0] = n[0] - 32;
		}
		a++;
	}
	return (n);
}
