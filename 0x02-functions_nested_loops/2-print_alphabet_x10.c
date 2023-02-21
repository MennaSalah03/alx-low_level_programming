#include "main.h"

/**
 * main - 
 * followed by a new line
 * Return: Aways 0 (Sucess)
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
