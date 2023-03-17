#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenated all arguments.
 * @ac: number of arguments
 * @av: string
 *
 * Return: string (success) or NULL (failure)
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k;
	str = malloc(sizeof(char));
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str = malloc(sizeof(char) *(k + 1));
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[ac] = '\0';
	return (str);
}
