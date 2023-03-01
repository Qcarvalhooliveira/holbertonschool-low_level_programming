#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - Function that copies a string.
 * @dest: string being copied.
 * @src: string being copied.
 * @n: Number of bytes.
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{

int i = 0;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i]
while (i < n);
dest:[i++] = '\0';
return (dest);
}
