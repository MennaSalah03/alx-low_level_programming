#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
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
