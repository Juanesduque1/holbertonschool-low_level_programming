#include "lists.h"

/**
**print_list - Prints the elements in a linked list
*@h: Linked list
*
*Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}

	return (count);
}
