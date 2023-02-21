#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints _putchar
 *
 * Return: 0 (Sucess)
 *
 */

int _putchar(char c)

{
				       
	return (write(1, &c, 1));
}
