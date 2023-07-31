#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - prints a string's length
 *
 * @s: the string pointer
 *
 * Return: the string length as integer
 */


int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * check - checks if strig is palindrome
 * @s: the string
 * @i: iterator
 *
 * Return: 0 is palindrom and 1 if not.
 */

int check(char *s, int i, int len)
{
	if (*(s + i) != (*s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check(s, i + 1, len--));
}

/**
 * is_Palindrome - finds palindromes from non-palindromes
 * @s: the string
 *
 * Return: 1 -> palindrome, 0-> not palindrome
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _strlen_recursion(s)));
}
