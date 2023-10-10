#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range -  a function that creates an array of integers
 * @min: Fro
 * @max: To
 * Return: pointer to the memory area s
 */

int *array_range(int min, int max)
{
	int j;
	int *arr;

	for (j = 0; min <= max; j++)
		min++;
	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * j);
	if (arr == NULL)
		return (NULL);
	return (arr);
}
