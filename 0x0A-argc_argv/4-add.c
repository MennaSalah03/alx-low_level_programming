#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: count of arguments
 * @argv: pointer to argumments as strings
 *
 * Return: The sum of entered numbers
 */

int main(int argc, char *argv[])
{
	int i,  res = 0;

	for (i = 1; i < argc; i++)
	{
		if (! atoi(argv[i]) || ! (atoi(argv[i]) > 0))
		{
			printf("Error\n");
			return (1);
		}
		res = res + atoi(argv[i]);
	}
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", res);
	}
	return (0);
}
