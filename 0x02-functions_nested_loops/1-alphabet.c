#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
* main - print alphabets using _putchar
* Return: 0
*/

void print_alphabet(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
