#include <stdio.h>
/**
 * main  prints all possible different 
 * combinations of two digits\
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1, num2;
	 /* using For loops and if conditions loop */
	 {
		for (num1 = 0;num2 <= 9;num1++)
		{
			for (num2 = 0;num2 <= 9;num2++)
			{
				if ((num1 != num2) && (num1 < num2))
				{
					putchar(48 + num1);
					putchar(48 + num2);
					if ((num1 != 8) && (num2 != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
