#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - Free´s the dog
 * @d: Struct in dog.h
 *
 * Return: Always 0
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
