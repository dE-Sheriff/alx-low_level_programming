#include "main.h"

/**
 * void more_numbers - prints num from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int a;
	int c;
	
	for (a = 0; a < 10; a++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar('1');
			_putchar(c % 10 + '0');
		}
	_putchar('\n');
	}
}
