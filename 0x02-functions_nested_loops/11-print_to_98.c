#include "main.h"
#include <stdio.h>

/**
 * void print_to_98 - prints numbers from 0 to 98
 * separated by commas
 * @n the number we want to start printing from
 */

void print_to_98(int n)
{
	int x, y;

	if (n > 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n < 98)
	{
		for (y = n; y >= 98; y--)
		{
			printf("%d", y );
			if (y != 98)
			{
				printf(", ");
			}
		}
	}
}
