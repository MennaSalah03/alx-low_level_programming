#include <stdio.h>

/**
 * main - prints all combinations of single digit numbers
 *
 * with commas separating each combination
 *
 *return 0 means success
 */
int main(void)
{
	int i,j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		for (j = 48; j < 58; j++)
		{
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
