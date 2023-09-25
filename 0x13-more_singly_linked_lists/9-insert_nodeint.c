#include "lists.h"

listint_t *add_node(listint_t *, const int, listint_t *);
size_t list_len(const listint_t *);
listint_t *insert_between(listint_t *head, listint_t *newNode,
		unsigned int place);

/**
 * insert_nodeint_at_index - insert a new node at a given position.
 *
 * @head: head node.
 * @idx: index of the list, where the new node should be added.
 * @n: data to be inserted.
 *
 * Return: the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = NULL, *temp = NULL;
	unsigned int len;

	if (head != NULL)
	{
		newNode = malloc(sizeof(listint_t));

		if (newNode == NULL)
			return (NULL);

		len = list_len(*head);
		temp = *head;
		newNode->n = n;
		if (len == 0)
		{
			newNode->next = NULL;
			*head = newNode;
			return (newNode);
		}

		if (idx == 0)
			return (add_node(temp, n, newNode));

		if (len == idx)
		{
			free(newNode);
			return (add_nodeint_end(head, n));
		}
		else if (len < idx)
		{
			free(newNode);
			return (NULL);
		}
		else
			return (insert_between(*head, newNode, idx));
	}
	return (newNode);
}

/**
 * insert_between - inserts new node between two nodes.
 *
 * @head: head node.
 * @newNode: new node to be inserted.
 * @place: the index of the place to insert the new node at.
 *
 * Return: the address of the new node.
 */
listint_t *insert_between(listint_t *head, listint_t *newNode,
		unsigned int place)
{
	listint_t *temp = head;
	unsigned int index = 1;

	while (index < place)
	{
		temp = temp->next;
		index++;
	}
	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}

/**
 * add_node - adds a new node at the beginning of a listint_t list.
 *
 * @head: head node.
 * @n: data field.
 * @newNode: node to be added.
 *
 * Return: the address of the new element, of NULL if it failed.
 */
listint_t *add_node(listint_t *head, const int n, listint_t *newNode)
{
	newNode->n = n;
	newNode->next = head;
	head = newNode;
	return (newNode);
}

/**
 * list_len - calculates the number of elements in a linked listint_t list.
 *
 * @h: head node.
 *
 * Return: size of the list.
 */
size_t list_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *ptr = h;

	for (; ptr != NULL; ptr = ptr->next)
	{
		len++;
	}
	return (len);
}
