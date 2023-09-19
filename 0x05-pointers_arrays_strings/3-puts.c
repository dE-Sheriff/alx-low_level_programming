#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: the string to print
 * Return: void
 */

void _puts(char *str)
{
	char c;

	while (*str != '\0')
	{
		c = '*str++';
		_putchar(c);
	}

	_putchar('\n');
}
