#include "main.h"
#include <stdio.h>

/**
 * cap_string - Function that capitalizes all words of a string..
 * @str: String to be capitalizaded.
 *
 * Return: Pointer to changed string.
 */

char *cap_string(char *)
{
int index = 0;
srt = int index;

while (str[index])
{
while (!(srt[index] >= 'a' && str[index] <= 'z'))
index++;
if (str[index -1] == ' ' ||
str[index -1] == '\t' ||
str[index -1] == '\n' ||
str[index -1] == ',' ||
str[index -1] == ';' ||
str[index -1] == '.' ||
str[index -1] == '!' ||
str[index -1] == '?' ||
str[index -1] == '"' ||
str[index -1] == '(' ||
str[index -1] == ')' ||
str[index -1] == '{' ||
str[index -1] == '}' ||
index == 0)
str[index] -= 32;
index++;
}
return (str);
}
