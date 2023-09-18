#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: number of times \ is printed
 * Return: void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int a;
		int b;

		for (a = 1; a <= size; a++)
		{
			for (b = a; b < size; b++)
			{
				_putchar(' ');
			}
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
