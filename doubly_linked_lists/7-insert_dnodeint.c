#include "lists.h"

/**
**insert_nodeint_at_index - Inserts a node at a given position
*@head: Head of the structure
*@idx: Index of the list
*@n: Node to add
*
*Return: Head of the structure
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *len_aux, *aux, *new_node = NULL;
	unsigned int i = 0, len = 0;

	if (!*h && idx != 0)
		return (NULL);

	len_aux = *h;
	while (len_aux)
	{
		len_aux = len_aux->next;
		len++;
	}
	if (idx > len)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	aux = *h;
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	while (i < idx - 1)
	{
		aux = aux->next;
		i++;
	}
	new_node->next = aux->next;
	aux->next = new_node;
	return (new_node);
}
