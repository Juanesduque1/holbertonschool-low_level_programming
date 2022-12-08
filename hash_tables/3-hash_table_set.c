#include "hash_tables.h"

/**
 * hash_table_set -  Adds element to a hash table
 * @ht: Hash table
 * @key: Key of the node
 * @value: Value of the node
 * Return: Always 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int index;
	hash_node_t *node = NULL;
	char *value_dup = NULL, *key_dup = NULL;

	if (!ht)
		return (0);

	key_dup = strdup(key);
	value_dup = strdup(value);

	index = hash_djb2((const unsigned char *)key_dup) % (ht->size);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = key_dup;
	node->value = value_dup;
	node->next = NULL;

	if (ht->array[index])
		node->next = ht->array[index];

	if (ht->array[index]->value != NULL)
	{
		ht->array[index]->value = value_dup;
		return (1);
	}
	ht->array[index] = node;

	return (1);
}
