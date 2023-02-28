#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 *
 *@s: String being evaluated.
 *
 * Return: Length of string
 */

int _strlen(char *s)

{

int i = 0;
while (*s++)
i++;
return (i);

}


#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 *
 * @s: Array being reversed.
 *
 */

void rev_string(char *s)

{
int i, len, tmp;

len = _strlen(s) - 1;
for (i = 0; i < (len / 2); i++)
{
tmp = s[i];
s[i] = s[len - i];
s[len - i] = tmp;
}

}
