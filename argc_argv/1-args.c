#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints the number of arguments.
 *
 * @argc: number of the command line arguments.
 * @argv: array containing command line arguments.
 *
 * Return: 0.
 *
 */

int main(int argc,  char *argv[]  __attribute__((unused)))
{

printf("%i\n", argc - 1);
return (0);
}
