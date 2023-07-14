#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - makes an array of ints
 * @min: minimum value
 * @max: maxin=mmum value
 *
 * Return: pointer to the new array (success)
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
