#include "main.h"

/**
 * print_most_numbers - Print numbers between 0 to 9 excluding 2 and 4
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
