#include <stdio.h>
#include "main.h"
/**
* main - print alphabets using _putchar
* Return: 0
*/

void print_alphabet(void)
{
	int n;
	for (n = 1, n <= 10, n++)
	{
		char ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	}
	_putchar('\n');
	return (0);
}
