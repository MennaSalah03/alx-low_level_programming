#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocated memory using malloc
 * @b: the size of memory to be allocated
 *
 * Return: voif pointer on succes and 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
