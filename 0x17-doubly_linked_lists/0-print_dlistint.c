#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @head: current node.
 *
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t nodes_len;
	const dlistint_t *temp = NULL;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp->prev != NULL)
		temp = temp->prev;

	for (nodes_len = 0; temp != NULL; nodes_len++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (nodes_len);
}
