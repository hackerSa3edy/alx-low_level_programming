#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position.
 *
 * @head: head node.
 * @idx: index of the list, where the new node should be added.
 * @n: data to be inserted.
 *
 * Return: the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = NULL, *temp = NULL;
	unsigned int len = 0;

	if (head != NULL)
	{
		temp = *head;
		for (; temp != NULL && len < idx - 1; len++)
			temp = temp->next;
		
		if (temp == NULL && idx != 0)
			return (NULL);

		newNode = malloc(sizeof(listint_t));
		newNode->n = n;

		if (idx == 0)
		{
			newNode->next = *head;
			*head = newNode;
		}

		newNode->next = temp->next;
		temp->next = newNode;

		if (newNode == NULL)
			return (NULL);
	}
	return (newNode);
}
