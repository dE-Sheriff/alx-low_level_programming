#include <stdio.h>
#include "main.h"

/**
 * main - prints FizzBuzz
 * Return: returns (0)
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 != 0))
		{
			printf("Fizz ");
		}
		else if ((a % 5 == 0) && (a % 3 != 0))
		{
			if (a < 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (a == 1)
		{
			printf("%d ", a);
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
