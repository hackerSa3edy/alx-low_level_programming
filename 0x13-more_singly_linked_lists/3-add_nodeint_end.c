#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: head node.
 * @n: data field.
 *
 * Return: the address of the new element, of NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (ptr == NULL)
	{
		*head = new;
		return (new);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new;

	return (new);
}
