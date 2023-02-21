#include "main.h"

/**
 * main- print the string putchar_
 * followed by a new line.
 * always Return 0 (success)
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
