#include "main.h"

/**
 * print_diagonal - Print diagonal line dependent on the integer n.
 * @n : The number of lines using '\' characters to use
 * Return: Void.
 */

void print_diagonal(int n)
{
		int num;

		for (n = 0; num <= n; num++)
		{
			_putchar(' ');
			if (num == n)
			{
				_putchar('\');
			}
			_putchar('\n');
		}
		if (n <= 0)
		{
			_putchar('\n');
		}
}
