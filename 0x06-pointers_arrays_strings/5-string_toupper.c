#include "main.h"

/**
 * string_toupper - a function that changes all
 * lowercase letters of a string to uppercase
 * @n: second string
 * Return: char
 */

char *string_toupper(char *n)
{
	int a;

	a = 0;
	while (n[a] != '\0')
	{
		if ((n[a] >= 'a') && (n[a] <= 'z'))
		{
			n[a] = n[a] - 32;
		}
		a++;
	}
	return (n);
}

}
