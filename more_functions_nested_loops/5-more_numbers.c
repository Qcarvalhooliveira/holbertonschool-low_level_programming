#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints the numbers 0 to 14 ten times..
 *
 */

void more_numbers(void)

{

int i, j, k, doubleDigit;

for (j = 0; j < 10; j++)
{
for (i = 0; i < 15; i++)
{
if (i < 10)
{
putchar(i + '0');
}
else
{
for (k = 0; k < 2; k++)
{
if (k == 0)
doubleDigit = i / 10;
else
doubleDigit = i % 10;
putchar(doubleDigit + '0');
}
}
}
putchar('\n');
}
}
