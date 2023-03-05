#include "main.h"

/**
 * _strncat- appends a string into a string but with a certain limit of bytes
 * @dest: appended to string
 * @src: source of appended string
 * @n: integer indicating byte limit
 * Return: the string appended
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && n != j; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
