#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 * @n: the count
 * @separator: separates prints
 * Return: Return sum or 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int x;
	char i;

	va_start(ptr, n);
	for (x = 0; x < n; x++)
	{
		i = va_arg(ptr, char *);
		if (i == NULL)
			printf("(nil)");
		else
			printf("%s", i);
		if ((x != (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr)
}
