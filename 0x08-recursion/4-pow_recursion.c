#include "main.h"

/**
 * _pow_recursion - gives a certain power of an integer
 * @x: the base of operation
 * @y: the raised to power
 * Return: the result of operation
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
