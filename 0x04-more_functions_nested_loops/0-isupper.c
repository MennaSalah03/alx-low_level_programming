#include "main.h"

/*
 * _issupper - checks whether the input is an uppercase letter or not
 * @C is the character being checked
 * Return: 1 if the character is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
