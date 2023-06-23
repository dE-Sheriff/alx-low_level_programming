#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	/* using whilev loop */

	while (ch <= 'z')
	{
		if ((ch == 'q') || (ch == 'e'))
		{
			ch++;
		}
		else
		{
			putchar('ch');
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
