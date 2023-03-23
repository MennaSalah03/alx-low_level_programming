#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - as name suggests, it prints numbers given as args
 * @separator: string that separates printed numbers
 * @n: count of the args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;


	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			break;
		}
		if (i < n)
		{
			printf("%d", va_arg(ap, int));
		}
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
