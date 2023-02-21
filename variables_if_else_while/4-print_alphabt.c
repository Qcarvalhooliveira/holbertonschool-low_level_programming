#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: 0 (Sucess)
 *
 */

int main(void)

{

char alphabet, e, q;

e = 'e';
q = 'q';

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet != e && alphabet != q)
putchar(alphabet);
}
putchar('\n');
return (0);

}
