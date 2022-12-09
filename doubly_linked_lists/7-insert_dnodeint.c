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

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < idx - 1)
	{
		if (!current)
			return (NULL);
		current = current->next;
		i++;
	}

	if (!current->next)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
