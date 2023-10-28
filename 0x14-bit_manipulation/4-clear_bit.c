#include "main.h"

/**
 * clear_bit -  a function that sets
 * the value of a bit to 0 at a given index.
 * @n: digit to set
 * @index: the index
 * Return: 1 if ok, or -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int control = 1;

	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}
	control <<= index;
	*n &= ~control;
	return (1);
}
