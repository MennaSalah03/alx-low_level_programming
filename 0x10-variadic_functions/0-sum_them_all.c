#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - gets sum of all parameters
 * @n: the number of arguments to be added
 *
 * Return: The addition result
 */

int sum_them_all(unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list p;

	if (n <= 0)
	{
		return (0);
	}
	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, int);
	}
	va_end(p);

	return (sum);
}
