#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int i, j, size;
	char tmp;

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
		;
	size = i - 1;
	j = 0;
	for (j = 0; j < size / 2; j++)
	{
		tmp = s[j];
		s[j] = s[size];
		s[size] = tmp;
		size--;
	}
}
