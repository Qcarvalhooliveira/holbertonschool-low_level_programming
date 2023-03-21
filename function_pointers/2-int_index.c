#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: pointer to array.
 * @size: size of array
 * @cmp: pointer to function code
 *
 * Return: index of first match, -1 if size <=0 or no matches.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; ++i)
			if (cmp(*(array + i)))
				return (i);
	}
	return (-1);
}
