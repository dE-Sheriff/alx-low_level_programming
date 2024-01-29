#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @s: the string to print
 * Return: void
 */

void _puts(char *s)
{
	char c;

	while (*s != '\0')
	{
		c = *s++;
		_putchar(c);
	}

	_putchar('\n');
}
