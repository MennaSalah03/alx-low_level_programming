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
	int sum, i;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (!(integercheck(atoi(argv[i]))))
			i
		{
			printf("Error\n");

			return (1);
		}
		else if (argc == 1)
		{
			printf("0");
		}
	
		argv[i] = atoi(argv[i]);
		sum += arg[i];
	}
	printf("%d\n", sum);

	return (0);
}
