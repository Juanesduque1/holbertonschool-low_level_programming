#include "lists.h"

/**
**dlistint_len - Prints the length of a doubly linked list
*@h: Doubly linked list
*
*Return: Number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
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
