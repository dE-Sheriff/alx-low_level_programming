#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: the amount of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = (unsigned int) malloc(b);
	if (arr == NULL)
	{
		return (98);
	}
	return (arr);
}
