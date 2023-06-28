#include "main.h"
/**
*_abs - print alphabets using _putchar
* @a: integer to be turned to absolute value.
* Return: 0 if true return: 1 if false
*/

int _abs(int a)
/* using if condition */
{
	/* n auto provided by header file*/
	int n = a;
	int nabs;
	if (n < 0)
	{
		n = n*(-1);
	}
	nabs = n;
	return (nabs);
}
