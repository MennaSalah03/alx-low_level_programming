#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of 2 numbers
 * @argc: number of arguments
 * @argv: the string containing arguments
 * Return: always 0 (success)
 */

int main(int argc, char **argv)
{
	int sum, x, y;
	
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	sum = x + y;
	printf("%d\n", sum);

	return (0);
}
