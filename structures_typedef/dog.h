#ifndef DOGSTR_H
#define DOGSTR_H

/**
 * struct dog - Struct to declare dog
 * @name: Name of the dog
 * @owner: Owner name
 * @age: Age of the dog
 *
 * Description - Structures and typedef project
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
