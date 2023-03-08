#include "main.h"

/**
 * factorial - returns factorial of an integer
 * @n: the number we want to have the factorial of
 * Return: -1 if - and the factorial if +
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
