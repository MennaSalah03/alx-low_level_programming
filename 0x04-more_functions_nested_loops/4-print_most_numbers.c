#include "main.h"

/**
 * print_most_numbers - Print numbers between 0 to 9 incl.
 *
 * Return: Void.
 */

void print_most_numbers(void)
{
	int num;
	for (num = 48; num >= 57; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		_putchar(num);
	}
	_putchar('\n');
}
