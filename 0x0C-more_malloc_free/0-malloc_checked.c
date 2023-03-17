#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - checks memory using malloc
 * @b: size of memory allocated
 */

void *malloc_checked(unsigned int b);
{
	int *check;

	check = malloc(b);
	if (check == NULL)
	{
		exit(98);
	}
	return (check);
}
