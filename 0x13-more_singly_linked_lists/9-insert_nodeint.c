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
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *temp;
	unsigned int counter = 0;

	if (newNode == NULL || head == NULL)
		return (NULL);

	temp = *head;
	newNode->n = n;
	if (temp == NULL)
	{
		newNode->next = NULL;
		*head = newNode;
	}

	while (temp->next != NULL && counter < idx - 1)
	{
		counter++;
		temp = temp->next;
	}

	if (counter == idx - 1)
	{
		newNode->next = temp->next;
		temp->next = newNode;
	}

	if ((idx - counter) > 1 && temp->next == NULL)
	{
		free(newNode);
		return (NULL);
	}

	return (newNode);
}
