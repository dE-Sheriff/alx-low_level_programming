#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return:(0)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
