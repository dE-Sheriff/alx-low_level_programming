#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the string to print
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;
	int flen;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (flen = len; flen > 0; flen--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');


}
