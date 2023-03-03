#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - Function that that searches a string for any of a set of bytes.
 * @s: string being evaluated.
 * @accept: bytes being searched.
 *
 * Return: ponters to the byte in s or null.
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i]; ++i)
{
for (j = 0; accept[j]; ++j)
{
if (s[i] == accept[j])
return (s + i);
}
}
return (0);
}
