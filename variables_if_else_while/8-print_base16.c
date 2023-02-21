#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Sucess)
 *
 */

int main(void)

{

int d;
char alphabet;

for (d = '0'; d <= '9'; d++)
putchar(d);

for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
utchar(alphabet);
putchar('\n');

return (0);

}
