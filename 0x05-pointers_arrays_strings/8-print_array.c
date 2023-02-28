#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array of certain length
 * @a: array of certain number of integers
 * @n: number of integers in the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
