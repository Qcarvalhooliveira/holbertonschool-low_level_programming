#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Prints the alphabet in lowercase
 * Return: 0 (Sucess)
 *
 */

int main(void)

{
char c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
