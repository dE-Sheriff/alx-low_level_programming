#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
* main - print alphabets using _putchar
* Return: 0
*/

void print_alphabet_x10(void)
{
	/* using for loop */
	int n;
	for (n = 1; n <= 10; n++)
	{
		char ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	}
	_putchar('\n');
}
