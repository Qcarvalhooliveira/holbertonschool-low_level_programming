#include "main.h"
#include <unistd.h>

/**
 * _puts_reccursion - Function that prints a string.
 *
 * @s: string being evaluated..
 */

void _puts_recursion(char *s)
{

if (!*s)
{
putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
