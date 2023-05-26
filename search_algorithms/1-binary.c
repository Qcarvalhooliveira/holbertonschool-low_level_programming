#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array using Binary search.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: -1 if If value is not present in array or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;
	int index;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");

		for (index = left; index <= right; index++)
		{
			printf("%d", array[index]);
			if (index < right)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}
