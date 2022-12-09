#include "hash_tables.h"

/**
 * hash_table_delete -  Deletes a hash table
 * @ht: Hash table to delete
 * Return: Always 0
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux = NULL;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux)
		{
			if (aux->key)
				free(aux->key);
			if (aux->value)
				free(aux->value);
			free(aux);
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
