#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be half-printed
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (i = i / 2 - 1 ; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
