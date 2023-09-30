#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @n: second string
 * Return: char
 */

char *leet(char *n)
{
	int a;

	a = 0;
	while (n[a] != '\0')
	{
		if ((n[a] == 'a') || (n[a] == 'A'))
		{
			n[a] = '4';
		}
		else if ((n[a] == 'e') || (n[a] == 'E'))
		{
			 n[a] = '3';
		}
		else if ((n[a] == 'o') || (n[a] == 'O'))
		{
			n[a] = '0';
		}
		else if ((n[a] == 't') || (n[a] == 'T'))
		{
			n[a] = '7';
		}
		else if ((n[a] == 'l') || (n[a] == 'L'))
		{
			n[a] = '1';
		}
		a++;
	}
	return (n);
}
