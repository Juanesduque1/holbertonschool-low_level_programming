#include "lists.h"

/**
**print_list - Prints the elements in a linked list
*@list_t: Linked list
*
*Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
	int count = 0;
	size_t node = list_t->head;

	while (node)
	{
		printf("%d", node->data);
		node = node->next;
		count++;
	}

	return (count);

}