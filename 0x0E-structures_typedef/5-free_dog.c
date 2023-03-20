#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - entry point
 * @d: pointer with datatype dog named dog_t(typedefined)
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
