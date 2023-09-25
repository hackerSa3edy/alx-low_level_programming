#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position.
 *
 * @head: head node.
 * @idx: index of the list, where the new node should be added.
 * @int: data to be inserted.
 *
 * Return: the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int counter = 1;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (temp == NULL)
	{
		newNode->next = NULL;
		*head = newNode;
	}

	while (temp->next != NULL && counter < idx)
	{
		counter++;
		temp = temp->next;
	}
	
	if (counter == idx)
	{
		newNode->next = temp->next;
		temp->next = newNode;
	}

	if (counter != idx && temp->next == NULL) 
	{
		free(newNode);
		return (NULL);
	}

	return (newNode);
}
