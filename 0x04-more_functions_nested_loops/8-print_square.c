#include "main.h"

/**
 * print_square - prints square
 * @size: number of times \ is printed
 * Return: void
 */

void print_square(int size)
{
	if (size > 0)
	{
		int a = 0;
		int b;

		while (a < size)
		{
			b = 0;
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			++a;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
