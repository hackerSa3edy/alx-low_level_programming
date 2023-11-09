#include "lists.h"

/**
 * free_dlistint - frees a distint_t list.
 *
 * @head: current node.
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	if (head == NULL)
		return;

	temp = head;
	while (temp->prev != NULL)
		temp = temp->prev;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
