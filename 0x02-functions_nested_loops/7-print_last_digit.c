#include "main.h"
#include "stdio.h"
/**
* print_last_digit - print alphabets using _putchar
* @a: integer to be turned to absolute value.
* Return: 0 if true return: 1 if false
*/

int print_last_digit(int a)
/* using if condition */
{
	/* n auto provided by header file*/
	int l_dig;

	l_dig = a % 10;
	if (a < 0)
	{
		l_dig = l_dig *(-1);
		printf('l_dig');
	{
}