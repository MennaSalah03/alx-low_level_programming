#include "main.h"

/**
 * print_rev - pprints a string in reverse
 * @s: string printed in reverse
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	for (i = 0; s[i] != '\0'; i++);
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
