#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function that gets the right operation to occur
 * @s: The operator used
 *
 * Return: a pointer to the right operation function
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	for (i = 0; ops[i].op; i++)
	{
		if (ops[i].op[1] == '\0')
		{
			printf("Error\n");
			exit(99);
		}
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
	}
	return (0);
}
