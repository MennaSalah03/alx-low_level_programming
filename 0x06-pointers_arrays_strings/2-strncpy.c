#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: copied to string
 * @src: copied from string
 * @n: the number of characters in source string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
