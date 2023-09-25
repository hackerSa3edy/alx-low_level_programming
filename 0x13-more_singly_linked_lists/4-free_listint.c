#include "lists.h"

/**
 * free_listint - free a listint_t list.
 *
 * @head: head node.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
