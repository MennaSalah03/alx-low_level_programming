#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - make pointer to a 2 dim array
 * @width: first dim of array
 * @height: second dim
 * Return: the array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;
	
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc (height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width *sizeof(int *));
	/*	if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
		*/
	}
	for (i =  0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
