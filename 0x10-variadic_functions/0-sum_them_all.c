#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - adds all arguments given to the function
 * @n: count of arguments
 * Return: the sum of args
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, unsigned int);
	}
	va_end(ptr);

	return (sum);
}

