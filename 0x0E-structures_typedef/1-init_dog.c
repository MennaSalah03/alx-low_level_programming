#include "dog.h"
#include <stdio.h>/*To use NULL*/

/**
 * init_dog - initializes structure
 * @d: pointer to structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
