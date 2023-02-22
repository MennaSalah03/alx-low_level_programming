#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char string[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(string[a]);
	}
	_putchar('\n');
	return (0);
}
