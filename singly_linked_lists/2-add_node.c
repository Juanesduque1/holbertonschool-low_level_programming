#include "lists.h"

/**
**add_node - Add elements to the structure
*@head: Head of the structure
*@str: String to add in the structure
*
*Return: Number of nodes
*/

list_t *add_node(list_t **head, const char *str)
{

	list_t *new;
	int count = 0;

	while (str[count])
	{
		count++;
	}

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = count;
	new->next = *head;
	*head = new;

	return (new);
}
