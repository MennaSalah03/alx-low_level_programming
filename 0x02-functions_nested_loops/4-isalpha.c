#include "main.h"

/**
 * main - checks if input is a letter or otherwise
 * freturns 1 if letter and 0 if otherwise
 * Return: Aways 0 (Sucess)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 )
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
