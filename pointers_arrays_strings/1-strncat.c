#include "main.h"
#include <stdio.h>

/**
 * *_strncat - Function that concatenates two strings.
 * @dest: string being concatenate
 * @src: string being concatenate
 * @n: Number of bytes.
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

int i = 0;
int j = 0;

while (dest[i])
i++;
while (j < n && src[j] != '\0')
dest[i++] = src[j++];
dest [i] = '\0';
return (dest);
}
