#include "main.h"

/**
 * _islower - returns 1 if c is lowercase
 * and returns 0 otherwise
 * Return: always 0: (success)
 */

int _islower(int c)
{
	if(c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
