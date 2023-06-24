#include <stdio.h>
/**
 * main - prints all possible combinations\
 * of single-digit numbers.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;
	/* using whilev loop */

	while (num <= 9)
	{
		putchar(48 + num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
			num++;
		}
		else if (num == 9)
		{
			num++;
		}
	}
	putchar('\n');
	return (0);
}
