#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *
 * @head: current node.
 * @n: the new node's data.
 *
 * Return: the address of the new element, of NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *new_node = NULL;

	if (head == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->prev = NULL;
		(*head)->next = NULL;

		return (*head);
	}

	temp = *head;
	while (temp->prev != NULL)
		temp = temp->prev;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	temp->prev = new_node;
	new_node->next = temp;
	*head = new_node;

	return (new_node);
}
