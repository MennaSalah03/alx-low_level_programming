#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @string 2
 * Return: 0 if the same, -ve if s1 is less, +ve if higher
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 == '\0')
		{
			return (0);
		}
	}
	return (*s1 - *s2);
}
