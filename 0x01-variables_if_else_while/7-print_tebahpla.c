#include <stdio.h>
/**
 * main - Prints the alphabet in reverse.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'z';
	/* using whilev loop */

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
