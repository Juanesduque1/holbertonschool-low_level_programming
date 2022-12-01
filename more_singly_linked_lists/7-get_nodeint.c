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
	unsigned int i, list_size = 0;

	for (i = 0; i < index; i++)
	{
		list_size++;
		head = head->next;
	}

	if (!head || index > list_size)
		return (NULL);
	return (head);
}
