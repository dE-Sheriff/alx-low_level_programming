#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - length of a string
 * @d: string
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
