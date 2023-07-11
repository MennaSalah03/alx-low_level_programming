#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates 2 strings into one
 * @s1: first string
 * @s2: second string
 *
 * Return: the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	for (len1 = 0; s1[len1] != '\0' ; len1++);
	for (len2 = 0; s2[len2] != '\0'; len2++);
	/*added 1 to len1 and len2 bec. NULL char*/
	ptr = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	j = i;
	for (i = 0; i < len2; i++)
	{
		*(ptr + j) = *(s2 + i);
		j++;
	}
	return (ptr);
}
