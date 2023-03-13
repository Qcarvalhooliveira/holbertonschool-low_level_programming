#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - Function that returns a pointer to a newly allocated space in memory.
 * @str: String to e copied.
 *
 * Return: Pointer to new string identcal to str, NULL if str = NULL
 */

char *_strdup(char *str)

{
char *s;
int i, len;
i = 0;
if (!str)
return (NULL);
while (*(str + i))
++i;
len = i;
s = malloc(sizeof(char) * (len + 1));
if (!s)
return (NULL);
for (i = 0; i <= len; ++i)
*(s + i) = *(str + i);
return (s);
}
