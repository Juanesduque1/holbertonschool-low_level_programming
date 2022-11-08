#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints the structure of dog
 * @d: Struct in dog.h
 * @name: Name of the dog
 * @owner: Owner name
 * @age: Age of the dog
 *
 * Return: Always 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return (0);
	}
	else
	{
		if (d->name != NULL)
		{
			printf("Name: %s", d->name);
		}
		else
		{
			printf("Name: (nil)");
		}
		if (d->age != 0)
		{
			printf("Age: %i", d->age);
		}
		else
		{
			printf("Age: (nil)");
		}
		if (d->owner != NULL)
		{
			printf("Owner: %s", d->owner);
		}
		else
		{
			printf("Owner: (nil)");
		}
	}
}
