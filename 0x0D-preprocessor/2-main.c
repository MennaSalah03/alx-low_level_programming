#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it was compiled from
 * Return: always 0 (success)
 */

int main()
{
	printf("%s\n", __FILE__);
	return (0);
}
