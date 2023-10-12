#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function to free memory
 * @d: pointer to use
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

