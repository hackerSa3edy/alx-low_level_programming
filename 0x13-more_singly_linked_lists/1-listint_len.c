#include "lists.h"

/**
 * listint_len - calculates the number of elements in a linked listint_t list.
 *
 * @h: head node.
 *
 * Return: size of the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *ptr = h;

	for (; ptr != NULL; ptr = ptr->next)
	{
		len++;
	}
	return (len);
}
