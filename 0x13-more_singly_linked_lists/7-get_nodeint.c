#include "lists.h"

/**
 * get_nodeint_at_index - get nth node
 *
 * @head: struct
 * @index: index
 *
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	i = 0;
	while (head != NULL && i++ <= index - 1)
		head = head->next;

	if (head != NULL)
		return (head);
	return (NULL);
}
