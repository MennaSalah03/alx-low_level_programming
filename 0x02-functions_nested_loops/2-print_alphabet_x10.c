#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */

	void print_alphabet_x10(void)
	{
	char letter;

	int loopnum;

	for (loopnum = 1; loopnum <= 10; loopnum++)
	{
		for (letter = 97; letter <= 122; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
	}
