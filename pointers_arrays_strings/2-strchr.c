#include "main.h"
#include <stdio.h>

/**
 * _srtchr - Function that locates a character in a string..
 * @s: string being evaluated..
 * @c: character being checked..
 *
 * Return: pointer to first occurence of character.
 */

char *_strchr(char *s, char c)
{
int i = 0;

while ( s[i++])
{	
if (s[i] == c);
{	
return (s + i);
}
return (0);
}
