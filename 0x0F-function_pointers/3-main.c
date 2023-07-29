#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - print the result of a simple math operation
 *
 * Return: 0 (success) & 98,99, 100 means errors.
 */
int main(int argc, char *argv[])
{
	int (*calc)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	calc = get_op_func(argv[2]);/*store return of func*/
	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", calc(a, b));
	return (0);
}
