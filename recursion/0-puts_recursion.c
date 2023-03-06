#include "main.h"
#include <unistd.h>

/**
 * _puts_reccursion - Function that prints a string.
 *
 * @s: string being evaluated.
 */

void _puts_recursion(char *s)
{
		
if (!*s)
_putchar('\n');
return;
_puts_recursion(s + 1);
}
