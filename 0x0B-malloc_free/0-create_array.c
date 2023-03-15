#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creats an array of certain size.
 * @size: integer.
 * @c: initialization character.
 * Return: NULL or array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
