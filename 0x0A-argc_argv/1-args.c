#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to program
 *
 * @argc: count of arguments
 *
 * @argv
 *
 * Return: 0 means success
 */

int main(int argc, char *argv[] __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
