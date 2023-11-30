#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 *
 * @size: Size of the array.
 *
 * Return: pointer to a hash table, NULL otherwise.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_node_t));
	unsigned int index;

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (index = 0; index < size; index++)
		hash_table->array[index] = NULL;

	return (hash_table);
}
