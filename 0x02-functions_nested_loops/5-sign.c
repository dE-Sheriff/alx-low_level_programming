#include "main.h"
/**
*print_sign - print alphabets using _putchar
* @c:character to check if it islowercase.
* Return: 0 if true return: 1 if false
*/

int print_sign(int n)
/* using if condition */
{
	if (n > 0)
	{
		putchar('+');
		return(1);
	}
	else if (n == 0)
	{
		putchar ('0');
		return(0)
	}
	else if (n < 0)
	{
		putchar ('-');
		return (-1);
	}
}
