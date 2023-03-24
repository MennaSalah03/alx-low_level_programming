#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all arguments with char, int, float data types
 * @format: specifies the format
 */

void print_all(const char * const format, ...)
{
	va_list data;
	int i = 0;
	char *sep = "";
	char *ptr;

	va_start(data, format);
	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(data, int));
					break;
				case 's':
					ptr = va_arg(data, char *);
					if (ptr == NULL)
					{
						ptr = "(nil)";
					}
					printf("%s%s", sep, ptr);

					break;
				case 'i':
					printf("%s%d", sep, va_arg(data, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(data, double));
					break;
				default:
					i++;
					continue;
			}
		sep = ", ";
		i++;
		}
	}
	printf("\n");
	va_end(data);
}
