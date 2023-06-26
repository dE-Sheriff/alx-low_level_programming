#include <stdio.h>
#include "main.h"
/**
* _islower - print alphabets using _putchar
* Return: 0
*/

int _islower(int c)
{
	char c;

	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
