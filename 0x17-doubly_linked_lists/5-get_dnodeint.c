#include "lists.h"

/**
 * get_dnodeint_at_index - get node by index
 *
 * @head: head
 * @index: index
 *
 * Return: element
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while(index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
