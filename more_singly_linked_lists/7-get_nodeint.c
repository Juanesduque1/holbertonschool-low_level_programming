#include "lists.h"

/**
**get_nodeint_at_index - Returns the nth node
*@head: Head of the structure
*@index: Index that represents the nth node to call
*
*Return: Head of the structure
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux = head;
	unsigned int i, list_size = 0;

	while (aux)
	{
		list_size++;
		aux = aux->next;
	}

	if (!head || index > list_size)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
		return (head);
}
