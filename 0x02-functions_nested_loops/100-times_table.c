#include "main.h"

/**
 * print_times_table - prints a cetain amount of the multiplication table
 * @n is the multiplication operand we want to multiply untill (valid till 15 only)
 */

void print_times_table(int n)
{
	int x, y, z;
	if (n <= 15 && n >0)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (y == 0)
				{
					_putchar(z + '0');
				}
				else if (y != 0 && z < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
				else if (z < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
				}
				else if (z >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(z / 100 + '0');
					_putchar((z / 10) % 10 + '0');
					_putchar(z % 10 + '0');
				}
			}

		_putchar('\n');
		}
	}
}
