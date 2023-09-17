#include "main.h"

/**
 * print_line - draw straight line
 * @n: number of times _ is printed
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int a;
		int b;

		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (b == a)
					_putchar('\\');
				else if (b < a)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
