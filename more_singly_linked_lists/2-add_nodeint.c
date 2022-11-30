#include "lists.h"

/**
**add_nodeint - Adds a node to the linked list
*@head: Linked list
*@n: Numer to add to the linked list
*
*Return: The address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;


	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!head)
		head = &new_node;

	if (!(*head))
		*head = new_node;

	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
