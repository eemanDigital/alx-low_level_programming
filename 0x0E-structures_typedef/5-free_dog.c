#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - prints free struct pointer
 *
 * @d:tagname pointer to free
 *
 * Return: nothing
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
