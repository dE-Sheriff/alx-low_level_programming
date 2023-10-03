#include "main.h"

/**
 *_memcpy -  a function that copies memory area
 *@dest: copy to
 *@src: the byte
 *@n: the number of times
 *Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
