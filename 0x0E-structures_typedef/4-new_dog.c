#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates new dog(new entry in structure)
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: new entry to structure dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n_len, o_len;

	dog_t *new_doggy;

	for (n_len = 0; name[n_len] != '\0'; n_len++)
		;
	for (o_len = 0; owner[o_len] != '\0'; o_len++)
		;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_doggy = malloc(sizeof(dog_t));
	if (new_doggy == NULL)
	{
		return (NULL);
	}
	new_doggy->name = malloc(n_len * sizeof(char));
	if (new_doggy->name == NULL)
	{
		return (NULL);
	}
	new_doggy->owner = malloc(o_len * sizeof(char));
	if (new_doggy->owner == NULL)
	{
		return (NULL);
	}

	new_doggy->name = _strcpy(new_doggy->name, name);
	new_doggy->owner = _strcpy(new_doggy->owner, owner);
	new_doggy->age = age;

	return (new_doggy);
}

/**
 * _strcpy - copy strings to a buffer
 * @src: source of string
 * @dest: the buffer we want to copy to
 *
 * Return: the string stored pointed to by dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
