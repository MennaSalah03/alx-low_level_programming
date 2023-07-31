#include "main.h"
#include <stdio.h>

/**
 * ev_prime - analyse the number to decide if it's prime or not
 * @n: the number in question
 * @i: the iterator used
 *
 * Return: 0 if not prime, 1 if prime
 */
int ev_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (!(n % i) && i != 0)/*if n % i = 0 means divisible i not prime*/
		return (0);
	return (ev_prime(n, i - 1));
}
/**
 * is_prime_number - checks whether a number is prime or not
 * @n: number to check
 *
 * Return: 1 if n is prime and 0 if not
 */
int is_prime_number(int n)
{

	if (n <= 1)
		return (0);
	return (ev_prime(n, n - 1));
}
