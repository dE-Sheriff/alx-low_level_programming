#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 * Return: void
 */

void puts_half(char *str)
{
	int i, b, longi;

	longi = 0;

	for (i = 0; str[i] != '\0'; i++)
		longi++;

	b = (longi / 2);

	if ((longi % 2) == 1)
		b = ((longi + 1) / 2);

	for (i = b; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');

}
