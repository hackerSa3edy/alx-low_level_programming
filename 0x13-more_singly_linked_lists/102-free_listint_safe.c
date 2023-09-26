#include "lists.h"

/**
 * free_listint_safe - frees a linked list.
 *
 * @head: head node.
 *
 * Return: number of nodes in the list.
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *ptr = NULL, *temp = NULL;
	listptr_t *pointers = NULL;
	int len = 0;

	if (head == NULL || *head == NULL)
		return (0);

	ptr = *head;
	while (ptr != NULL)
	{
		if (check_loop(&pointers, (void *)ptr))
		{
			break;
		}
		add_nodeptr(&pointers, (void *)ptr);
		temp = ptr;
		ptr = ptr->next;
		free(temp);
		len++;
	}
	free_listptr(pointers);
	*head = NULL;
	return (len);
}
