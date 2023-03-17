#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: the number of characters to print from s2
 * Return: concatenated string (success) - NULL(fail)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int i, j, k;

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
	for (j = 0; s2[j] != '\0';j++)
		;
	if(n > ++j)
	{
		dest = malloc(sizeof(char) * (i + j - 1));
	}
	else
	{
		dest = malloc(sizeof(char) * (i + n - 1));
	}

	if (dest == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; s1[i] != '\0'; i++)
	{
		dest[k++] = s1[i];
	}
	if (n > j)
	{	
		for (j = 0; s2[j] != '\0'; j++)
		{
			dest[k++] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			dest[k++] = s2[j];
		}
	}
	dest[k] = '\0';
	return (dest);
}
