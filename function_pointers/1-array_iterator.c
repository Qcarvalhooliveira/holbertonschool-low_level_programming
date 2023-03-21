#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function as parameter on each element of array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function code
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size && action)
		while (i < size)
			action(*(array + i++));
}
