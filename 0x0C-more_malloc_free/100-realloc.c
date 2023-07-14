#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates memory block
 * @ptr: old memory pointer
 * @old_size: old size of beforely allocated memory
 * @new_size: new memory size to be allocated
 *
 * Return: void pointer to new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		free(ptr);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	ptr = malloc(new_size);
	return (ptr);
}
