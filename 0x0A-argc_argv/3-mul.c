#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of 2 numbers
 * @argc: number of arguments
 * @argv: string of args
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", product);
		return (product);
	}
}	
