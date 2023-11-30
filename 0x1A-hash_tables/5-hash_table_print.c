#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: The hash table.
*/
void hash_table_print(const hash_table_t *ht)
{
	const hash_table_t *temp_ht = ht;
	hash_node_t *temp_node = NULL;
	unsigned long int index, sep_index;

	if (ht == NULL)
		return;

	printf("{");
	sep_index = 0;
	for (index = 0; index < temp_ht->size; index++)
	{
		if (temp_ht->array[index] == NULL)
			continue;

		if (sep_index)
			printf(", ");
		sep_index = 1;
		temp_node = temp_ht->array[index];
		printf("'%s': '%s'", temp_node->key, temp_node->value);
		while (temp_node->next != NULL)
		{
			temp_node = temp_node->next;
			printf(", '%s': '%s'", temp_node->key, temp_node->value);
		}
	}
	printf("}\n");
}
