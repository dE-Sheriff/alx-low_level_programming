#include "main.h"

/**
 * reverse_array - a function that
 * reverses the content of an array of integers
 * @a: first string
 * @n: second string
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
