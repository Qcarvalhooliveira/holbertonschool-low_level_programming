#include "main.h"
#include <stdio.h>

/**
 * *_strstr - Function that locates a substring.
 * @haystack: string being chearched.
 * @needle: substring being searched.
 *
 * Return: pointer to beginning of located substing or null.
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;

if (*needle == '\0')
return (haystack);
for (i = 0; haystack[i]; ++i)
{
if (haystack[i] == needle[0])
{
for (j = 0; haystack[i] == needle[j]; ++i, ++j)
;
if (needle[j] == '\0')
return (haystack + i - j);
}
}
return (0);
}
