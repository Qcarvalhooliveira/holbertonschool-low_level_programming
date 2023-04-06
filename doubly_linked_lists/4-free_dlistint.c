#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pointer to free the list.
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual;
	
	while (head)
	{
	actual = head;
	head = head->next;
	free(actual);
	}
}
