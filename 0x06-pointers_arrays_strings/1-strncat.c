#include "main.h"

/**
 * _strncat- appends a string into a string but with a certain limit of bytes
 * @dest: appended to string
 * @src: source of appended string
 * @n: integer indicating byte limit
 * Returns: the string appended
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, n;

	n = sizeof(src);
	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
			dest[i] = src[j];
		}
	}
	if (sizeof(dest) < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
