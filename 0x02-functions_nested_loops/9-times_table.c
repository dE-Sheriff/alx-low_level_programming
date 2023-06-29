#include "main.h"
#include "stdio.h"
/**
* times_table - print alphabets using _putchar
* Return: 0 if true return: 1 if false
*/

void times_table(void)
/* printin multiplication table */
{
	int x,y,pr;

	for (x = 0; x <= 9; x++i)
	{
		_putchar(48);
		for (y = 1; y <= 9; y++)
		{
			pr = x * y;
			_putchar(44);
			_putchar(32);
			if (pr <= 9)
			{
				_putchar(32);
				_putchar(pr + 48);
			}
			else
			{
				_putchar((pr / 10) + 48);
				_putchar((pr % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
	/*using for loops */
