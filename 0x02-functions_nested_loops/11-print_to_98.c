#include "main.h"
#include "stdio.h"
/**
* print_to_98 - print alphabets using _putchar
* @n: iput to be ranged
* Return: 0 if true return: 1 if false
*/

void print_to_98(int n)
/*sum of two integers */
{
	/* no special function */
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
