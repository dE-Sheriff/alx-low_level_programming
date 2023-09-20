#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to print
 * Return: void
 */

void puts2(char *str)
{
	char r = s[0];
	int coun = 0;
	int a;

	while (s[coun] != '\0')
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
			r = s[a];
			_putchar(a);
			a++;
		}
	}
}
