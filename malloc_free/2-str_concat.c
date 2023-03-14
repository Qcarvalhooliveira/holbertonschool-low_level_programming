#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - Function that concatenates two strings.
 * @s1: String to be concatened.
 * @s2: String to be concatened.
 *
 * Return: Pointer to new string , NULL if str = NULL
 */

char *str_concat(char *s1, char *s2)
	
{
char *result = malloc(strlen(s1) + strlen(s2) + 1); 

strcpy(result, s1);
strcat(result, s2);
return (NULL);
}
