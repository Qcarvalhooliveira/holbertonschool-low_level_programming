#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings.
 * @s1: String to be concatenated.
 * @s2: String to be concatenated.
 *
 * Return: Concatenated string , NULL if empty or fail.
 */

char *str_concat(char *s1, char *s2)

{

	char *str;
	int len;
	int i = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (*(s1 + i))
		++i;
	len = i;
	i = 0;
	while (*(s2 + i))
		++i;
	len += i;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	for (i = 0; *s1; ++i)
		*(str + i) = *(s1++);
	for (; i <= len; ++i)
		*(str + i) = *(s2++);
	return (str);

}
