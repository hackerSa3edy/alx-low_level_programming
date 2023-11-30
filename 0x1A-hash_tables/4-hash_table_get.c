#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 *
 * @ht: The hash table.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element, or NULL if
 *	key couldn't be found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_k;
	hash_node_t *temp_node = NULL;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);
	hash_k = hash_djb2((const unsigned char *)key) % ht->size;
	temp_node = ht->array[hash_k];

	if (temp_node == NULL)
		return (NULL);

	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
			break;
		temp_node = temp_node->next;
	}

	if (temp_node != NULL)
		return (temp_node->value);
	return (NULL);
}
