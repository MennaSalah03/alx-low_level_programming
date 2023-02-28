#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: string printed
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; str += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}