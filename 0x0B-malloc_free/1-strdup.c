#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Deuplicates a string
 * @str: The string that is to be duplicated
 *
 * Return: pointer to the string duplicated
 */

char *_strdup(char *str)
{
	unsigned int len, i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	/*gets length of str*/
	for (len  = 0; str[len] != '\0'; len++)
	{}
	len++;

	ptr = (char *) malloc(len * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		*(ptr + i) = *(str + i);
	}
	return (ptr);
}
