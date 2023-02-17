#include <stdio.h>
/*
 * main- prints all the numbers in hexadecimals
 * and then a new line
 * return - always 0 (success)
 *
 */
int main(void)
{
        char ch;
	int i;

        for (i = 48; i < 58; i++)
        {
                putchar(i);
        }
	for (ch ='a'; ch <= 'f'; ch++ )
	{
		putchar(ch);
	}
        putchar('\n');
        return (0);
}
