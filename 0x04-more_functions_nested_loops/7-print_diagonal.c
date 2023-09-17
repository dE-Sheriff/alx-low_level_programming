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

		for (a = 1; a <= n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (b == a)
					_putchar('\\');
				else
					_putchar('_');
			}
			_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
