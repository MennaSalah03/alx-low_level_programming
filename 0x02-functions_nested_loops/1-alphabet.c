#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: nothin?
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 97; letter <= 122; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
