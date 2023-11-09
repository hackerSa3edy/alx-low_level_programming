#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: current node.
 * @index: the index of the node, starting from 0.
 *
 * Return: if the node doesn't exist, returns NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp->prev != NULL)
		temp = temp->prev;

	while (temp != NULL && counter < index)
	{

		temp = temp->next;
		counter++;
	}

	if (temp == NULL)
		return (NULL);

	return (temp);
}
