#include "main.h"
/**
*print_sign - print alphabets using _putchar
* @c:character to check if it islowercase.
* Return: 0 if true return: 1 if false
*/

int print_sign(int n)
/* using if condition */
{
	/* n auto provided by header file*/
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	return (0);
}
