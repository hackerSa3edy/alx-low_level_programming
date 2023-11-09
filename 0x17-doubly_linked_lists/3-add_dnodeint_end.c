#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: current node.
 * @n: the new node's data.
 *
 * Return: the address of the new element, of NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
	while (temp->next != NULL)
		temp = temp->next;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
