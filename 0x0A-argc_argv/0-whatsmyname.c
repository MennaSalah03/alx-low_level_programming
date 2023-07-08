#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 *
 * argc: count of arguments
 *
 * @argv: the arguments
 *
 * Return: should always 0 to ensure success
 */

int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
