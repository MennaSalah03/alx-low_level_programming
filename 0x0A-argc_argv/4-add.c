#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 *
 * @argc: count of arguments
 *
 * @argv: pointer to argumments as strings
 */

int main(int argc, char *argv[])
{
	int i, n,  res = 0;
	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);
		if (!(n >= 0))
		{
			printf("Error\n");
			return (1);
		}
		res = res + n;
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
