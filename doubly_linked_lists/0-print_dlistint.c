#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the list.
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *actual;
	size_t n;

	actual = h;
	n = 0;
	while (actual)
	{
		printf("%d\n", actual->n);
		actual = actual->next;
		++n;
	}
	return (n);
}
