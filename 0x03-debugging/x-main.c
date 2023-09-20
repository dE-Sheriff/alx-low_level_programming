#include "stdio.h"

/**
 * main - address of variable
 *
 * Return: always 0
 */
int main(void)
{
	char c;
	int n;

	printf("address of variable 'c': %p\n", &c);
	printf("address of variable 'n': %p\n", &n);
	return (0);
}
