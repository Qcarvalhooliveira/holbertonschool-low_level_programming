#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _print_rev_recursion - Function that prints a string in reverse.
 *
 * @s: string being evaluated.
 */

void _print_rev_recursion(char *s)
{

	if (!*s)
	{

	putchar(*s);
	_print_rev_recursion(s + 1);
}
}
