#ifndef dogstr
#define dogstr

/**
 * struct dog - Struct to declare dog
 * @name: Name of the dog
 * @owner: Owner name
 * @age: Age of the dog
 *
 * Description - Structures and typedef project
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog;

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
