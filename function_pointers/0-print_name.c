#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 * @name: pointer name of the person printed.
 * @f: pointer to function printing
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

