#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * factorial - Function that returns the factorial of a given number..
 *
 * @n: string being evaluated.
 * Return: If n is lower than 0, the function should return -1.
 */

int factorial(int n)
{

if(n < 0)
{
return -1;
else if (!n)
return (1);
}
   return (n * factorial(n - 1));
}



