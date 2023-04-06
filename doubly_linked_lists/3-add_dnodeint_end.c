#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to pointer of first node.
 * @n: integer to store in node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *actual;

	actual = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == 0)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == 0)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (actual->next)
			actual = actual->next;
		new->prev = actual;
		actual->next = new;
	}

	return (new);
}
