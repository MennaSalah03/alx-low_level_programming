#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds 2 numbers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: the addition result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - applies subtraction for 2 numbers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: the subtravted value
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_sub - applies multiplication for 2 numbers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: the multiplication result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_sub - applies division for 2 numbers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: the division result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_sub - applies modulus for 2 numbers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: the modulus result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		exit(100);
	}
	return (a % b);
}
