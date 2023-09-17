#include "main.h"

/**
 * void more_numbers(void) - prints num from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	char c;
	int a = 0;

	while (a < 10)
	{
		for (c = '0'; c <= '14'; c++)
			_putchar(c);
	}
		_putchar('\n');
}
