#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 *
 * @head: head node.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp1, *temp2;

	if (head == NULL)
		return (NULL);

	temp1 = head;
	temp2 = head;
	while(temp2 && temp2->next)
	{
		temp1 = temp1->next;
		temp2 = (temp2->next)->next;
		printf("not here\n");
		if ((void *)temp1 == (void *)temp2)
		{
			temp1 = head;
			while ((void *)temp1 != (void *)temp2)
			{
				temp1 = temp1->next;
				temp2 = temp2->next;
			}
			return (temp1);
		}
	}
	return (NULL);
}
