#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: current node.
 * @idx: position where the new node will be inserted.
 * @n: data related to the new node.
 *
 * Return: address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *new_node = NULL;
	unsigned int counter = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (*h == NULL && idx != 0)
		return (NULL);

	temp = *h;
	while (temp->next != NULL && counter < idx)
	{
		counter++;
		temp = temp->next;
	}

	if (temp->next == NULL && counter == idx)
		return (add_dnodeint_end(h, n));
	if (temp->next == NULL && counter != idx)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp;
	new_node->prev = temp->prev;
	temp->prev->next = new_node;

	return (new_node);
}
