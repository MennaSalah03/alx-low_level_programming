#include "main.h"

/**
 * reverse_array - reverses content of array of integers
 * @a: array
 * @n: number of elements  in array
 */

void reverse_array(int *a, int n)
{	
	int i;
	
	n = sizeof(a) / sizeof(a[0]);
	for (i = n; i > 0; i--)
	{
		a[n - i] = a[i];
	}
}
