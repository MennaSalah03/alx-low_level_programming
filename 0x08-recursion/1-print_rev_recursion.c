#include <stdio.h>
#include "main.h"

/*
*_print_rev_recursion - perform like A REVERSE puts(prints string to the screen)
*s: the string to be printed
*Return: Void 
*/

void _print_rev_recursion(char *s)
{
    if (*s != '\0')
    {
        _print_rev_recursion(s+1);
        _putchar('\n');
    }
    else
    _putchar(*s);       
}
