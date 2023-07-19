#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name as a string
 * @f: function to print name
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		(*f)(name);
	}
}
