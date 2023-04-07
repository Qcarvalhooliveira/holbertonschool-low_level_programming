#include "lists.h"

/**
 * delete_dnodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of the list.
 * @index: index of the node deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
	temp = temp->next;
	if (temp == NULL)
	return (-1);
	}
	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
		(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
		temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
