#include "main.h"

/**
 * int print_last_digit- prints the last diigit of number
 * followed by a new line
 * Return: Aways 0 (Sucess)
 */
int print_last_digit(int num)
{
	if (num < 0)
	{
		num = num * -1;
	}
	_putchar(num % 10 + '0');
	return (num % 10);
}
