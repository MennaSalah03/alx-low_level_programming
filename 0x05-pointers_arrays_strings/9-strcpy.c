#include "main.h"

/**
 * _strcpy - copy strings to a buffer
 * @src: source of string
 * @dest: the buffer we want to copy to
 * Return: the string stored pointed to by dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
