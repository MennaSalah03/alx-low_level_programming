#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - as name suggests, it prints numbers given as args
 * @separator: string 
 * @n: counts the args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;


	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			break;
		}
		if (i != n)
		{
		printf("%d%s", va_arg(ptr, int), separator);
		}
		else
		{
			printf("%d", va_arg(ptr, int));
		}
	}
	va_end(ptr);
}
