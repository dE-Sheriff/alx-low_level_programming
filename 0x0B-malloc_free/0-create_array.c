#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates
 * an array of chars, and initializes it with a specific char
 * @size: the string
 * @c: the array type
 * Return: void
 */

char *create_array(unsigned int size, char c)
{
	char *arrc;
	unsigned int x;

	arrc = malloc(sizeof(char) * size);
	if (size == 0 || arrc == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		arrc[x] = c;
	return (arrc);
}
