#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at a given position.
 *
 * @head: head node.
 * @index: index of the list, where the node should be deleted.
 *
 * Return: (1) success, otherwise (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *deleted_node = NULL, *temp = NULL;
	unsigned int len = 0;

	if (head != NULL && *head != NULL)
	{
		temp = *head;
		for (; temp != NULL && len < index - 1; len++)
			temp = temp->next;

		if (temp == NULL && index != 0)
			return (-1);

		if (index == 0)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
			return (1);
		}

		deleted_node = temp->next;
		temp->next = (temp->next)->next;
		free(deleted_node);
		return (1);
	}
	return (-1);
}
