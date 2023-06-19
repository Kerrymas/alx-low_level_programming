#include "dog.h"

/**
 * init_dog - inits a variable od dog type
 * @d: identification of dog
 * @name: dog name
 * @age: age of dog
 * @owner: owners's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if  (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
