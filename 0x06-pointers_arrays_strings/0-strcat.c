#include "main.h"

/**
 * _strcat - appends string to another string and trminating null byte at the end of string
 * @dest: the string we append to
 * @src: the string we take data from
 * Returns: a pointer with the string in dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	
	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
			dest[i] = src[j];
		}
	}
	dest[i] = '\0';
	return (dest);
}
