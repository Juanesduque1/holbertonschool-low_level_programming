#include "lists.h"

/**
**list_len - Prints the elements in a linked list
*@h: Linked list
*
*Return: Number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
