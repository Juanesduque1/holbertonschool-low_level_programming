#include "lists.h"

/**
**insert_dnodeint_at_index - Inserts a node at a given position
*@h: Head of the structure
*@idx: Index of the list
*@n: Node to add
*
*Return: Head of the structure
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *new_node, *current;
	unsigned int i = 0;

	current = *h;

	if (!*h)
		return (NULL);

	while (i < idx && current)
	{
		current = current->next;
		i++;
	}

	if (!current)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	 new_node->n = n;
	 new_node->prev = current->prev;
	 new_node->next = current;

	if (!current->prev)
		*h = new_node;
	else
		current->prev->next = new_node;

	if (current)
		current->prev = new_node;

	return (new_node);
}
