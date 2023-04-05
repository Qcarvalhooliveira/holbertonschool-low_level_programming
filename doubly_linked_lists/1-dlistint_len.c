#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the list.
 *
 * Return: number of elements in a linked dlistint_t.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *actual;
	size_t n;

	actual = h;
	n = 0;
	while (actual)
	{

	actual = actual->next;
	++n;
	}
	return (n);
}
