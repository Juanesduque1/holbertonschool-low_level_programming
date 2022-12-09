#include "hash_tables.h"

/**
 * hash_table_print -  Prints the elements of a hash table
 * @ht: Hash table
 * Return: Always 0
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, count = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			if (count != 0)
				printf(",");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
			count++;
		}
	}
	printf("}\n");
}
