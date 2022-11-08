#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - Returns a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int lenowner, lenname, i, j;

	newDog = malloc(sizeof(dog_t));
	lenname = strlen(name);
	lenowner = strlen(owner);

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->age = age;
	newDog->name = malloc(lenname + 1);
	if (newDog->name == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(lenowner + 1);
	if (newDog->owner == NULL)
	{
		free(newDog->owner);
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	for (i = 0; i < lenname + 1; i++)
	{
		newDog->name[i] = name[i];
	}
	for (j = 0; j < lenowner + 1; j++)
	{
		newDog->owner[j] = owner[j];
	}
	return (newDog);
}
