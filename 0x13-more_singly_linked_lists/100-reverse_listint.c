#include "lists.h"

/**
 * reverse_listint - reverse a linked list.
 *
 * @head: head node.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *ptr = NULL;

	if (head == NULL)
		return (NULL);

	temp = ptr = *head;
	while (temp->next != NULL && temp != NULL)
	{
		ptr = temp->next;
		temp->next = (temp->next)->next;
		ptr->next = *head;
		*head = ptr;
	}

	return (*head);
}
