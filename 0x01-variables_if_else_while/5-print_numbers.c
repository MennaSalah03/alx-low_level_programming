#include <stdio.h>

/**
 * main - prints thenumbers from 0 to 9
 * followed by a new line
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
