#include "dog.h"

/**
 * init_dog dog - Initialize a variable with struct
 * @name: Name of the dog
 * @owner: Owner name
 * @age: Age of the dog
 *
 * Description - Structures and typedef project
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->owner = owner;
	d->age = age;

}
