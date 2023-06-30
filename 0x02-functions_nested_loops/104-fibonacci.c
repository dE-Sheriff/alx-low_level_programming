#include "main.h"
#include "stdio.h"
/**
* main - print alphabets using _putchar
* Return: 0 if true return: 1 if false
*/

int main(void)
/*sum of two integers */
{
	/* no special function */
	int c, boolean, boolean2;
	long int x1, x2, fx, fx2, x11, x22;

	x1 = 1;
	x2 = 2;
	boolean = boolean2 = 1;
	printf("%ld, %ld", x1, x2);
	for (c = 0; c < 96; c++)
	{
		if (boolean)
		{
			fx = x1 + x2;
			printf(", %ld", fx);
			x1 = x2;
			x2 = fx;
		}
		else
		{
			if (boolean2)
			{
				x11 = x1 % 1000000000;
				x22 = x2 % 1000000000;
				x1 = x1 / 1000000000;
				x2 = x2 / 1000000000;
				boolean2 = 0;
			}
			fx2 = (x11 + x22);
			fx = x1 + x2 + (fx2 / 1000000000);
			printf(", %ld", fx);
			printf("%ld", fx2 % 1000000000);
			x1 = x2;
			x11 = x22;
			x2 = fx;
			x22 = (fx2 % 1000000000);
		}
		if (((x1 + x2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
