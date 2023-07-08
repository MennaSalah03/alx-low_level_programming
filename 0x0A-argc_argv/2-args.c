#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments received
 *
 * @argc: count of arguments
 *
 * @argv: pointer to pointer pointing to arguments entered
 *
 * Return: 0 menas success
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return(0);
}
