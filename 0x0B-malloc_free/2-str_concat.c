#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates strings
 * @s1: first string
 * @s2: second string
 * Return: the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *dest;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	i++;
	for (j = 0; s2[j] != '\0'; j++)
		;
	j++;
	dest = malloc((i + j - 1) * sizeof(char));
	for (i = 0; s1[i] != '\0'; i++)
	{
		dest[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		dest[i++] = s2[j];
	}
	if (dest == NULL)
	{
		return (NULL);
	}
	dest[i] = '\0';
	return (dest);
}
