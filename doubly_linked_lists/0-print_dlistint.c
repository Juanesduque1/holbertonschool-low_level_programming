#include "lists.h"

/**
**print_dlistint - Prints the elements in a doubly linked list
*@h: Doubly linked list
*
*Return: Number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{

	unsigned int list_size = 0;

	if (!h)
		return (list_size);

	while (h)
	{
		printf("%d\n", h->n);
		list_size++;
		h = h->next;
	}
	return (list_size);
}
