#include "main.h"

/**
 * main - prints the string of characters _putchar
 * followed by a new line
 * Return: Aways 0 (Sucess)
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
