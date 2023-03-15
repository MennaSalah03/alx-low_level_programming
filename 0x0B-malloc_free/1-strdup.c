#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dest;
	unsigned int i, len;

	
	for (len = 0; str[len] != '\0'; i++)
		;
	if (str == NULL)
		return (NULL);

	dest = malloc(sizeof(char) * (len + 1));

	if (dest == NULL)
		return (NULL);

	while ((dest[i] = str[i]) != '\0')
		i++;
	return (dest);
}
