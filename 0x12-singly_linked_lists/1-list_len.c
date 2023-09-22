#include "lists.h"

/**
 * list_len - Calculates the number of elements in a linked list_t list.
 *
 * @head: head node.
 *
 * Return: number of the nodes.
 */
size_t list_len(const list_t *head)
{
	unsigned int length = 0;

	while (head != NULL)
	{
		head = head->next;
		length++;
	}
	return (length);
}
