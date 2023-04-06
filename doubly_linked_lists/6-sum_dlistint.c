#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list.
 * @head: pointer to start of list.
 *
 * Return: sum of all the data(n) of a linked list or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *actual;
	int sum;

	actual = head;
	sum = 0;

	while (actual)
	{
	sum += actual->n;
	actual = actual->next;
	}
	return (sum);
}
