#include "main.h"

/**
 * int print_sign- tells whether a number's sign
 * followed by a new line
 * Return: Aways 0 (Sucess)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
	_putchar('\n');
	return (0);
}
