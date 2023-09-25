#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a listint_t linked list.
 *
 * @head: head node.
 * @index: index of the node.
 *
 * Return: nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int counter = 0;

	while (temp != NULL && counter < index)
	{
		counter++;
		temp = temp->next;
	}
	return (temp);
}
