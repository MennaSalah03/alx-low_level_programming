#include <stdio.h>
#include "main.h"

/**
 * puts_recursion - perform like puts(prints string to the screen)
 *
 * s: the string to be printed
 *
 * Return: Void
 *
 */

void _puts_recursion(char * s)
{
    if (*s != '\0')
    {
        _putchar(*s);
        _puts_recursion(s+1);
    }
    else
    {
        _putchar('\n');
    }
}
