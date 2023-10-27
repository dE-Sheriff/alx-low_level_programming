#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint -  a function that converts
 * a binary number to an unsigned int
 * @b:pointing to a string of 0 and 1 chars
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		n <<= 1;
		if (b[i] == '1')
			n += 1;
	}
	return (n);
}
