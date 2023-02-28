#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be half-printed
 */

void puts_half(char *str)
{
	int i, size,n ;

	for (i = 0; str[i] != '\0'; i++)
		;
	size = i - 1;
	for (i = size / 2 ; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
