#include "main.h"

/**
 * void more_numbers(void) - prints num from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int a = 0;
	char c;
	while (a < 10)
	{
		c = '0';
		for (c; c <= '14'; c++)
			_putchar(c);
	}
	a++;
	_putchar('\n');
}
