#include <stdio.h>

/**
 * main - prints thenumbers from 0 to 9
 * followed by a new line
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 58; i++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}
