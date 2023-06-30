#include "main.h"
#include "stdio.h"
/**
* main - print alphabets using _putchar
* Return: 0 if true return: 1 if false
*/

int main(void)
/*sum of two integers */
{
	/* no special function */
	int x, y;

	for (x = 1; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			y += x;
	}
	printf("%d\n", y);
	return (0);

}
