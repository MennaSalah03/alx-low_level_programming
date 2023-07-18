#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free space of data in structure
 * @d: pointer to structure
 *
 * Return: Nothing
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
