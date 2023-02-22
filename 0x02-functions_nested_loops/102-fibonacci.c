#include <stdio.h>

/**
 * main - prints the first 50 term of fibonachi series
 * Return: always 0 (success)
 */

int main(void)
{
	int count;
	long int fib1 = 1;
	long int fib2 = 2;
	for (count = 3; count <= 50; count++)
	{
		long int fib = fib1 + fib2;
		printf("%ld", fib)
		if (count == 3)
		{
			printf(", \n");
		}
		else if (count != 50)
		{
			printf(", ");
		fib1 = fib2;
		fib2++;
	}
	return (0);
}
