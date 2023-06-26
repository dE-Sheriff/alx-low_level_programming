#include "main.h"
/**
* _islower - print alphabets using _putchar
* @c:character to check if it islowercase.
* Return: 0 if true return: 1 if false
*/

int _islower(int c)
/* using if condition */
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
