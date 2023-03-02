#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on sucess 1.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
