#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints all formats
 * @format: a string that specifies the formats of the arguments
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int n = 0, i = 0;
	va_list ap;
	char *ptr;

	while (format[n] != '\0')
		n++;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));/*updated to int due to compiler issue*/
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));/*double due to compiler issues*/
				break;
			case 's':
				ptr = va_arg(ap, char *);
				if (!ptr)
				{
					printf("(nil)");
				}
				printf("%s", ptr);
				break;
			default:
				i++;
				continue;/*skip printing separator*/
		}
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
