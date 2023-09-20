#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	char r = s[0];
	int coun = 0;
	int a;

	while (s[coun] != '\0')
	coun++;
	for (a = 0; a < coun; a++)
	{
		coun--;
		r = s[i];
		s[a] = s[coun];
		s[coun] = r;
	}

}
