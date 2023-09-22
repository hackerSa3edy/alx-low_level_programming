#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 *
 * @head: head node.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *ptr = NULL;

	while (head != NULL)
	{
		if (head->str != NULL)
			free(head->str);

		ptr = head;
		head = head->next;
		free(ptr);
	}
}
