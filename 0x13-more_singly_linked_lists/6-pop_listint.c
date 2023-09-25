#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 *
 * @head: head node.
 *
 * Return: the head node's data.
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *newHead = *head;

	data = (*head)->n;
	*head = (*head)->next;
	free(newHead);

	return (data);
}
