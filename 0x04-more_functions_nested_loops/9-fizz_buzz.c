#include <stdio.h>
#include "main.h"

/**
 * main - prints FizzBuzz
 * Return: void
 */

void main(void)
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if ((a % 5 == 0) && (a % 3 != 0))
		{
			printf("Buzz");

		}
		else if ((a % 3 == 0) && (a % 5 != 0))
		{
			printf("Fizz");
		}
		else if (a == 1)
		{
			printf("%d", a);
		}
		else if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", a);
		}
	}
	printf("\n");

}
