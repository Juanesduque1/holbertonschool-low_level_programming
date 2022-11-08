#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * init_dog: Initialize a variable with struct
 * @d: Struct in dog.h
 * @name: Name of the dog
 * @owner: Owner name
 * @age: Age of the dog
 *
 * Description - Structures and typedef project
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Ok\n");
	}

	d->name = name;
	d->owner = owner;
	d->age = age;

}
