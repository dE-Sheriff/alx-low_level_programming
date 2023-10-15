#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @n: the count
 * @separator: separates prints
 * Return: Return sum or 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int x;
	unsigned int i;

	va_start(ptr, n);
	for (x = 0; x < n; x++)
	{
		i = va_arg(ptr, int);
		printf("%d", i);
		if ((x != (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
}
