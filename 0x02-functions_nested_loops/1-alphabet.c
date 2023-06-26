#include <stdio.h>
#include "main.h"
/**
* main - print alphabets using _putchar
* Return: 0
*/

int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	return (0);
}
