#include "main.h"
#include <stdio.h>

/**
 * *_strcat - Function that concatenates two strings.
 * @*dest: string being concatenate
 * @*src: string being concatenate
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{

int i = 0;
int j = 0;

while (dest[i])
i++;
while (src[j])
dest[i++] = src[j++];
dest [i] = src[j];
return (dest);
}
