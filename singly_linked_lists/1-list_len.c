#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t.
 * @h: ponter to a list.
 *
 * Return: Number of elements in the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
