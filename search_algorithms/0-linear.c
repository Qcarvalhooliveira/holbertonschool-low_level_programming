#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using Linear search.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: -1 if If value is not present in array or if array is NULL..
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
	{
	return (-1);
	}
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);

	if (array[index] == value)
	{
		return (index);
	}
	}
	return (-1);
}
