#include "main.h"
/**
* _isalpha - print alphabets using _putchar
* @c:character to check if it islowercase.
* Return: 0 if true return: 1 if false
*/

int _isalpha(int c)
/* using if condition */
{
	if ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
