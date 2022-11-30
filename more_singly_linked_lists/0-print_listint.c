#include "lists.h"

/**
**print_listint - Prints the elements in a linked list
*@h: Linked list
*
*Return: Number of nodes
*/

size_t print_listint(const listint_t *h)
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
