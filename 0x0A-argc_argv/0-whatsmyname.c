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

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc -1]);
	return (0);
}
