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
	int j, x;
	int *arr;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	arr = malloc(sizeof(int) * j); 
	if (arr == NULL)
		return (NULL);
	for (x = 0; min <= max; x++)
	{
		arr[x] = min++;
	}
	return (arr);
}
