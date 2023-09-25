#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 *
 * @head: head node.
 *
 * Return: sum of all linked list data.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
