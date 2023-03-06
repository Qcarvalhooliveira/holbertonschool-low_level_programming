#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _pow_recursion - Function that returns the value of x raised to the power of y.
 *
 * @x: Value being raised.
 * @y: Value being raised.
 * Return: x raised power y.
 */

int _pow_recursion(int x, int y)
{

if (y < 0)
return (-1);
else if (!y)
return (1);
return (x * _pow_recursion(x, y - 1));
}
