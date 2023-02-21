#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints alphabet lowcase and uppercase
 * Return: 0 (Sucess)
 *
 */

int main(void)

{

         char alphabet;

         for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
         putchar (alphabet);

         for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
         putchar (alphabet);
         putchar ('\n');

         return (0);

}
