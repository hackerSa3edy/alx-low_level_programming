#include "lists.h"

/**
 * free_listint2 - free a listint_t list and sets the head to null.
 *
 * @head: head node.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	head = NULL;
}
