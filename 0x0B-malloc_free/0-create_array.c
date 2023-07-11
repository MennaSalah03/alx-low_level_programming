#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars
 * @size: the  size of the array
 * @c: the char that we will initialize the array with
 *
 * Return: The array of characters
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	ptr = (char *) malloc(size * sizeof(char));
	for (i = 0; i <= size; i++)
	{
		*(ptr + i) = c;
	}
	*(ptr + i) = '\0';

	return (ptr);
}
