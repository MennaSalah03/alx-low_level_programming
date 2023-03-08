#include "main.h"

/**
 * _puts_recursion - prints string using recursion
 * @s: string printed
 */

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
