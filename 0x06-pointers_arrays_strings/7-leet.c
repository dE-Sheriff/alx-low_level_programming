#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @n: input value
 * Return: char
 */

char *leet(char *n)
{
	int a, x;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (x = 0; x < 10; x++)
		{
			if (n[a] == str1[x])
			{
				n[a] = str2[x];
			}
		}
	}
	return (n);
}
