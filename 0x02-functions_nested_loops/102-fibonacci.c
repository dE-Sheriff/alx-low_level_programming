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
	int b;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (b = 0; b < 48; b++)
	{
		fn = (n1 + n2);
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
	return (0);

}
