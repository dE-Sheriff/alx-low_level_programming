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
	long int x1, x2, fx, afx;

	x1 = 1;
	x2 = 2;
	fx = afx = 0;
	while (fx <= 4000000)
	{
		fx = x1 + x2;
		x1 = x2;
		x2 = fx;
		if ((x1 % 2) == 0)
		{
			afn += x1;
		}
	}
	printf("ld\n", afx);
	return (0);

}
