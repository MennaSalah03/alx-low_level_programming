#include "main.h"

/**
 * tells us whether an integer is in the range from 0 to 9 or not
 * Return: always 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
