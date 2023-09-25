#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: head node.
 *
 * Return: size of the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	const listint_t *ptr = h;

	for (; ptr != NULL; ptr = ptr->next)
	{
		printf("%i\n", ptr->n);
		len++;
	}
	return (len);
}
