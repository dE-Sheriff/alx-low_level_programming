#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  a function that returns the sum of all its parameters
 * @n: the count
 * Return: Return sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int x;
	unsigned int sum = 0;

	va_start(ptr, n);
	if (n == 0)
		return (0);
	for (x = 0; x < n; x++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
