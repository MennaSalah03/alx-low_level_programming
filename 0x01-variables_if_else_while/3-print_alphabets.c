#include <stdio.h>

/*
 * main - prints the alphabet in lowercase
 * and adds a new line
 * return - always 0 (success)
 */
int main(void)
{
	char ch1;
	char ch2;

	for (ch1 = 97; ch1 <= 122; ch1++)
	{
		putchar(ch1);
	}
	for (ch2 = 65; ch2 <= 90; ch2++)
	{
		putchar(ch2);
	}
	putchar('\n');
	return (0);
}
