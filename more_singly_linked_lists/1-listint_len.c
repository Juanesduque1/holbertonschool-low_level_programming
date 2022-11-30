#include "lists.h"

/**
**listint_len - Prints the length of a linked list
*@h: Linked list
*
*Return: Number of nodes
*/

size_t listint_len(const listint_t *h)
{

	unsigned int list_size = 0;

	if (!h)
		return (list_size);

	while (h)
	{
		list_size++;
		h = h->next;
	}
	return (list_size);
}
