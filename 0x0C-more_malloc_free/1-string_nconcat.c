#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates 2 strings in a specific way
 * where you add a certain amount of bytes from second string to the first.
 * @s1: first string
 * @s2: second string
 * @n: the size from s2 to be allocated
 *
 * Return: the concatenated string or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	while (n > len2)
		n--;
	if (n < 0)
	{
		return (NULL);
	}
	ptr = malloc((n + len1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; ++i)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	if (ptr[i] != '\0')
	{
		ptr[i] = '\0';
	}
	return (ptr);
}
