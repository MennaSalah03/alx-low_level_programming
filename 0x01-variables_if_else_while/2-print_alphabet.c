#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
