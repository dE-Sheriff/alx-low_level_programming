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
	char uch = 'A';
	/* using while loop */

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/* Another while loop */

	while (uch <= 'Z')
	{
		putchar(uch);
		uch++;
	}
	putchar('\n');
	return (0);
}
