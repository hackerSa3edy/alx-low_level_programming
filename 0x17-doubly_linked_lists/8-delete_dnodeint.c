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
	dlistint_t *temp, *temp2;
	unsigned int counter = 0;

	if (head == NULL)
		return (-1);

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		if (temp->next != NULL)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		temp->next = NULL;
		temp->prev = NULL;
		free_dlistint(temp);
		return (1);
	}

	while (temp->next != NULL && counter < index)
	{
		temp = temp->next;
		counter++;
	}

	if (counter == index)
	{
		temp2 = temp;
		(temp->prev)->next = temp->next;
		if (temp->next != NULL)
			(temp->next)->prev = temp->prev;
		temp2->next = NULL;
		temp2->prev = NULL;
		free_dlistint(temp2);
		return (1);
	}
	else
		return (-1);

	return (1);
}
