#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	else if (s2 == NULL)
	{
		s2 = '\0';
	}

	for (len1 = 0; s1[len1] != '\0' ; len1++){}
	for (len2 = 0; s2[len2] != '\0'; len2++){}
	ptr = (char *) malloc((len1 + len2) * sizeof(char));

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
