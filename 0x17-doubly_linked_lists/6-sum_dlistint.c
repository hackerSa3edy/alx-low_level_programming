#include "lists.h"

/**
 * sum_dlistint - sum all data (n) of a dlistint_t linked list.
 *
 * @head: current node.
 *
 * Return: the sum result or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->prev;
	}

	temp = head->next;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
