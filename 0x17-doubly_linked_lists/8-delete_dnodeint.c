#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 *
 * @head: current node.
 * @index: position of the node.
 *
 * Return: 1 if if succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int counter = 0;

	if (head == NULL)
		return (-1);

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (temp->next != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}

	while (temp->next != NULL && counter < index)
	{
		temp = temp->next;
		counter++;
	}

	if (counter == index)
	{
		(temp->prev)->next = temp->next;
		if (temp->next != NULL)
			(temp->next)->prev = temp->prev;
		free(temp);
		return (1);
	}
	else
		return (-1);

	return (1);
}
