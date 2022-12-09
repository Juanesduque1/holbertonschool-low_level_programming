#include "hash_tables.h"

/**
 * hash_table_get -  Gets value of an element in a hash table
 * @ht: Hash table
 * @key: Key of the node
 * Return: Always 0
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);

	while (ht->array[index])
	{
		if ((strcmp(ht->array[index]->key, key) == 0))
			return (ht->array[index]->value);

		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
