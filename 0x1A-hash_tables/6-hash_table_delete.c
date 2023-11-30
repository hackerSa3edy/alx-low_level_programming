#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: The hash Table.
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *temp_ht = ht;
	hash_node_t *temp_node = NULL;
	hash_node_t *ptr = NULL;
	unsigned long int index;

	if (ht == NULL)
		return;

	for (index = 0; index < temp_ht->size; index++)
	{
		if (temp_ht->array[index] == NULL)
			continue;

		temp_node = temp_ht->array[index];
		while (temp_node != NULL)
		{
			ptr = temp_node;
			temp_node = temp_node->next;
			free_node(ptr);
		}
	}
	free(ht->array);
	free(ht);
}
