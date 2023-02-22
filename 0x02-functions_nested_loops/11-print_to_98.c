#include "main.h"
#include <stdio.h>

/**
 * void print_to_98- prints numbers from 0 to 98
 * separated by commas
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		if (n < 98)
		{
			printf("%d,",n);
			_putchar(' ');
		}
		else if (n == 98)
		{
			printf("%d",n);
		}
	}
}		
