#include "lists.h"

int check_loop(listptr_t **list, const void *node);
listptr_t *add_nodeptr(listptr_t **head, void *ptr);
void free_listptr(listptr_t *head);

/**
 * print_listint_safe - prints a linked list.
 *
 * @head: head node.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = head;
	listptr_t *pointers = NULL;
	int len = 0;

	while (ptr != NULL)
	{
		if (check_loop(&pointers, (void *)ptr))
		{
			printf("-> [%p] %i\n", (void *)ptr, ptr->n);
			break;
		}
		add_nodeptr(&pointers, (void *)ptr);
		printf("[%p] %i\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
		len++;
	}
	free_listptr(pointers);
	return (len);
}

/**
 * check_loop - check for loops in linked list.
 *
 * @list: head node.
 * @node: node to be checked for duplicates.
 *
 * Return: (1) found, (0)otherwise.
 */
int check_loop(listptr_t **list, const void *node)
{
	int found = 0;
	listptr_t *ptr = *list;

	while (ptr != NULL)
	{
		if ((void *)node == (void *)ptr->ptr)
		{
			found = 1;
			break;
		}

		ptr = ptr->next;
	}
	return (found);
}

/**
 * add_nodeptr - adds a new node at the beginning of a listptr_t list.
 *
 * @head: head node.
 * @ptr: data field.
 *
 * Return: the address of the new element, of NULL if it failed.
 */
listptr_t *add_nodeptr(listptr_t **head, void *ptr)
{
	listptr_t *new = malloc(sizeof(listptr_t));

	if (new == NULL)
	{
		free_listptr(*head);
		exit(98);
	}

	new->ptr = ptr;
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * free_listptr - free a listptr_t list.
 *
 * @head: head node.
 *
 * Return: Nothing.
 */
void free_listptr(listptr_t *head)
{
	listptr_t *ptr = head;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
