#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @head: head node.
 *
 * Return: number of the nodes.
 */
size_t print_list(const list_t *head)
{
	unsigned int length = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);

		head = head->next;
		length++;
	}
	return (length);
}
