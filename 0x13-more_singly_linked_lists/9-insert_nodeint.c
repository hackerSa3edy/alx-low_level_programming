#include "lists.h"

listint_t *add_node(listint_t *, const int, listint_t *);

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
	unsigned int counter = 0;

	if (head != NULL)
	{
		newNode = malloc(sizeof(listint_t));

		if (newNode == NULL)
			return (NULL);

		temp = *head;
		newNode->n = n;
		if (temp == NULL)
		{
			newNode->next = NULL;
			*head = newNode;
			return (newNode);
		}

		if (idx == 0)
			return (add_node(temp, n, newNode));

		while (temp->next != NULL && counter < idx - 1)
		{
			counter++;
			temp = temp->next;
		}

		if (counter == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
		}

		if ((idx - counter) > 1 && temp->next == NULL)
		{
			free(newNode);
			return (NULL);
		}
	}
	return (newNode);
}

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
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
