#include <stdio.h>
/**
 * main - Prints numbers of base ten.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;
	/* using whilev loop */

	while (num <= 9)
	{
		putchar(48 + num);
		num++;
	}
	putchar('\n');
	return (0);
}
