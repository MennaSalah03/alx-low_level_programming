#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coints to make the value entered.
 * @argc: count of the arguments
 * @argv: pointer to the arguments
 *
 * Return: always 0 (success) 1 if error
 */

int main(int argc, char *argv[])
{
	int i, val, count;
	int coins[5] = {25, 10, 5, 2, 1}; 

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	val = atoi(argv[1]);
	if (val < 0)
	{
		printf("0\n");
		return (0);
	}

	while (val != 0)
	{
		for (i = 0; i < 5;)
		{
			if (val >= coins[i])
			{
				val -= coins[i];
				count++;
			}
			else
			{
				i++;
			}

		}
	}
	printf("%d\n", count);
	return (0);
}
