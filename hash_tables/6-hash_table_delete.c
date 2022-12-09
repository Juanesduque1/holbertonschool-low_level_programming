#include "hash_tables.h"

/**
 * hash_table_delete -  Deletes a hash table
 * @ht: Hash table to delete
 * Return: Always 0
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux = NULL, *current = NULL;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux)
		{
			current = aux;
			if (current->key)
				free(current->key);
			if (current->value)
				free(current->value);
			if (current)
				free(current);
			aux = aux->next;
		}
	}
	free(ht->array);
	free(ht);
}
