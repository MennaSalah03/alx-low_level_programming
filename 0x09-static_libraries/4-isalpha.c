#include "main.h"

/**
 * _isalpha - prints alphabet both in lowecase and upper
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);

}
