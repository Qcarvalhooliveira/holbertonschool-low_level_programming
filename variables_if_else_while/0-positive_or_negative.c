#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints positive or negative numbers
 * Return: 0 (Sucess)
 *    
 */

int main(void)

{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

sitive_or_negative.c

if (n > 0)
{
printf("%d is positive \n", n);	
}
else if (n == 0)
{
printf("%d is zero \n", n);
}
else 
{
printf("%d is negative \n", n);
}
return (0);

}
