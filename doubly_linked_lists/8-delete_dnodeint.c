#include "lists.h"

/**
**delete_dnodeint_at_index - Deletes a node at a position given with index
*@head: Head of the structure
*@index: Index that points where to delete the node
*
*Return: Head of the structure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *new;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	new = *head;

	while (i < index && new)
	{
		new = new->next;
		i++;
	}
	if (new->next)
		new->next->prev = new->prev;

	if (new->prev)
		new->prev->next = new->next;

	if (index == 0)
		*head = new->next;

	free(new);
	return (1);
}
