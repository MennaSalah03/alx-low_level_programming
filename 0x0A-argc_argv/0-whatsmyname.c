#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file.
 * @argc: number of arguments.
 * @argv: string in the file.
 * Return: always 0 (success)
 */

int main(int __attribute__((__unused__)) argc,char **argv)
{
	printf("%s", argv[0]);
	return (0);
}
