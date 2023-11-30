#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 *
 * @ht: The hash table.
 * @key: The key of the element.
 * @value: The value of the element.
 *
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	hash_node_t *collision = NULL;
	unsigned long int hash_k;

	if (new_node == NULL || *key == '\0')
	{
		free(new_node);
		return (0);
	}

	hash_k = hash_djb2((const unsigned char *)key) % ht->size;
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free_node(new_node);
		return (0);
	}

	if (ht->array[hash_k] == NULL)
	{
		new_node->next = NULL;
		ht->array[hash_k] = new_node;
	}
	else
	{
		collision = handle_collision(&ht, &new_node);
		if (collision == NULL)
			return (0);
	}
	return (1);
}

/**
 * free_node - free the allocated memory for a hash_node_t list type.
 *
 * @node: The node to be freed.
*/
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * handle_collision - Handle the collision in the hash table.
 *
 * @ht: The hash table.
 * @n_node: The new node.
 *
 * Return: If success, returns the new node or the updated
 *	value node, NULL otherwise.
*/
hash_node_t *handle_collision(hash_table_t **ht, hash_node_t **n_node)
{
	hash_table_t *hash_table = *ht;
	hash_node_t *new_node = *n_node;
	const char *key = new_node->key, *value = new_node->value;
	char *temp_value = NULL;
	unsigned long int hash_k;
	hash_node_t *collision_nodes = NULL;

	hash_k = hash_djb2((const unsigned char *)key) % hash_table->size;
	collision_nodes = hash_table->array[hash_k];
	while (collision_nodes != NULL)
	{
		if (strcmp(collision_nodes->key, key) == 0)
			break;
		collision_nodes = collision_nodes->next;
	}
	if (collision_nodes == NULL)
	{
		new_node->next = hash_table->array[hash_k];
		hash_table->array[hash_k] = new_node;
		return (new_node);
	}
	else
	{
		temp_value = strdup(value);
		free_node(new_node);
		if (temp_value == NULL)
			return (NULL);
		free(collision_nodes->value);
		collision_nodes->value = temp_value;
	}
	return (collision_nodes);
}
