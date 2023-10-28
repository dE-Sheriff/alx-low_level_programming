#include "main.h"

/**
 * set_bit -  a function that
 * sets the value of a bit to 1 at a given index.
 * @n: digit to set
 * @index: the index
 * Return: 1 if ok, or -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int control = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	control <<= index;
	*n = *n | control;
	return (1);
}
