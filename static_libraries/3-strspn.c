#include "main.h"
#include <stdio.h>

/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s: string being evaluated.
 * @accept: bytes being compared.
 *
 * Return: number of bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
int j;

for (i = 0; s[i]; ++i)
{
for (j = 0; accept[j]; ++j)
{
if (s[i] == accept[j])
break;
}
if (accept[j] == '\0')
break;
}
return (i);
}
