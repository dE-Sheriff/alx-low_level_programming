#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: one of integer to be swaped
 * @b: second pof the int to be swaped
 * Return: n
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
