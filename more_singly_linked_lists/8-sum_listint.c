#include "lists.h"

/**
**sum_listint - Returns the sum of the data in a structure
*@head: Head of the structure
*
*Return: Head of the structure
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
