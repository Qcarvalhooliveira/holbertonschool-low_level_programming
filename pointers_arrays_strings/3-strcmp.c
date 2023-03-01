#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Function that compares two strings.
 * @*s1: First string being compared.
 * @*s2: Second string being compared.
 *
 * Return: string s1 and s2
 */

int _strcmp(char *s1, char *s2)


{

int i;

i = 0;
while(s1[i] && s2[i] && s1[i] == s2[i])
i++;

return (s1[i] - s2[i]);

}

