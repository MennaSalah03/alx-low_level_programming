#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: string of the arguments
 * Return: always 0 (auccess)
 */

int main(int argc,char **agrv __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
