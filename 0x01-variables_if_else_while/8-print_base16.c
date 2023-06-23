#include <stdio.h>
/**
 * main - main block
 * Description: Print all lowercase letters \
then uppercase letter followed by new line.
 * You can only use `putchar` to print to the console.
 * You can only use `putchar` up to three times.
 * Return: 0
 */

int main(void)
{
	char ch = 'a';
	int num = 0;
	/* using while loop */

	while (num <= 9)
	{
		putchar(48 + num);
		num++;
	}
	/* Another while loop */

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
