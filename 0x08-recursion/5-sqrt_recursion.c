#include <stdio.h>
#include "main.h"





/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

/* Look for the conditions for square roots*/
/**
 * _sqrt_recursion - gices you the square root of the inputed number if it exited
 * @n: The integer to get square root
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));

}
