#include "main.h"
#include "stdio.h"
/**
* jack_bauer - print alphabets using _putchar
* Return: 0 if true return: 1 if false
*/

void jack_bauer(void)
/* printin every minut in 24 hours */
{
	/*using for loops */
	int w, x, y, z;

	for (w = 0; w <= 2; w++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (y = 0; y <= 5; y++)
			{
				for (z = 0; z <= 9; z++)
				{
					if (w == 2 && x > 3)
					{
						break;
					}
					_putchar(w + '0');
					_putchar(x + '0');
					_putchar(':');
					_putchar(y + '0');
					_putchar(z + '0');
					_putchar('\n');
				}
			}
		}
	}
}
