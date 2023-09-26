#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listptr - struct for pointers
 *
 * @ptr: address to be stored.
 * @next: next node.
 */
typedef struct listptr
{
	void *ptr;
	struct listptr *next;
} listptr_t;
/**
 * struct listint_s - singly linked list.
 *
 * @n: integer.
 * @next: points to the next node.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *);
size_t listint_len(const listint_t *);
listint_t *add_nodeint(listint_t **, const int);
listint_t *add_nodeint_end(listint_t **, const int);
void free_listint(listint_t *);
void free_listint2(listint_t **);
int pop_listint(listint_t **);
listint_t *get_nodeint_at_index(listint_t *, unsigned int);
int sum_listint(listint_t *);
listint_t *insert_nodeint_at_index(listint_t **, unsigned int, int);
int delete_nodeint_at_index(listint_t **, unsigned int);
listint_t *reverse_listint(listint_t **);
size_t print_listint_safe(const listint_t *);

#endif /* LISTS_H */