#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints lowercase alphabet in reverse
 *
 * Return: 0 (Sucess)
 *
 */

int main(void)

{

char alphabet;

for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
putchar(alphabet);
putchar('\n');

return (0);

}
