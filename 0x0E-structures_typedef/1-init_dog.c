#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - entry point
 * @d: pointer
 * @name: name
 * @age: float
 * @owner: owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
