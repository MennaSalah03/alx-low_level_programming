#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * and prints first instance of finsing it.
 * @array: the array to search in
 * @size: size of array
 * @cmp: pointer to the function to search for (a) specific integer(s)
 *
 * Return: The index of required integer.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index, res, x;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp != NULL)
	{
		for (x = 0; x < size; x++)
		{
			res = (*cmp)(array[x]);
			if (res != 0)
			{
				index = x;
				break;
			}
		}
		if (x == size)
		{
			return (-1);
		}
	}
	return (index);
}
