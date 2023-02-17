#include <stdio.h>

/*
 * main- prints the alphabet in lowercase
 *
 * return - always 0 (success)
 *
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
