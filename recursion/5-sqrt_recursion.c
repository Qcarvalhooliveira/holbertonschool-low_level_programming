#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * test_root - Test for maximum squares.
 * @n: Number being evaluated.
 * @i: Test values being interated.
 *
 * Return: square root.
 */

int test_root(int n, int i)
{

if (i * i == n)
return (i);
else if (i * i > n)
return (-1);
return (test_root(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: Number being evaluated.
 *
 * Return: square root.
 */

int _sqrt_recursion(int n)
{
return (test_root(n, 1));
}
