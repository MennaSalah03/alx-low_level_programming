#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the char that will separate between numbers
 * @n: the number of numbers printed
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		else
		{
			printf("\n");
		}
	}
}
