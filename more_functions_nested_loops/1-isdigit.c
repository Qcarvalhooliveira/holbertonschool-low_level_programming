#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for a digit.
 *
 *@c: The character to be checked.
 *
 * Return: 1 if digit, otherwise 0.
 *
 */

int _isdigit(int c)

{

if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
