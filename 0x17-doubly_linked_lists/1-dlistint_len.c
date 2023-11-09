#include "lists.h"

/**
 * dlistint_len - returns the number of elements of a dlistint_t list.
 *
 * @head: current node.
 *
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t nodes_len;
	const dlistint_t *temp = NULL;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp->prev != NULL)
		temp = temp->prev;

	for (nodes_len = 0; temp != NULL; nodes_len++)
		temp = temp->next;

	return (nodes_len);
}
