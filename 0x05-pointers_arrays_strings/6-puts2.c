#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to print
 * Return: void
 */

void puts2(char *str)
{
	char r;
	int coun = 0;
	int a;

	while (str[coun] != '\0')
	coun++;
	a = 1;
	while (a < coun)
	{
		if (a % 2 == 0)
		{
			a++;
		}
		else if (a % 2 == 1)
		{
			r = str[a];
			_putchar(r);
			a++;
		}
	}
}
