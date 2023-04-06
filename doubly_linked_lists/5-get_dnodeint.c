#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to start of list.
 * @index: index of node, starting from 0.
 *
 * Return: the address of the specified node or NULL if node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *actual;
	unsigned int i;

	actual = head;
	i = 0;
	while (actual)
	{
	if (i == index)
		return (actual);

	actual = actual->next;
	++i;
	}
	return (NULL);
}
