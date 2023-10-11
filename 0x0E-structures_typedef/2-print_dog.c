#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * printt_dog - a function that initialize a variable of type struct dog
 * @d: the struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
