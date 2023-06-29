#include "main.h"
#include "stdio.h"
/**
* print_times_table - print alphabets using _putchar
* @n: iput to be ranged
* Return: 0 if true return: 1 if false
*/

void print_times_table(int n)
/*sum of two integers */
{
	/* no special function */
	int x, y, pr;
	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(48);
			for (y= 1; y <= n; y++)
			{
				pr = x * y;
				_putchar(44);
				_putchar(32);
				if (pr <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(pr + 48);
				}
				else if (pr <= 99)
				{
					_putchara(32);
					_putchar((pr / 10) + 48);
					_putchar((pr % 10) + 48);
				}
				else
				{
					_putchar(((pr / 100) % 10) + 48);
					_putchar(((pr / 10) % 10) + 48);
					_putchar((pr % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}

}
