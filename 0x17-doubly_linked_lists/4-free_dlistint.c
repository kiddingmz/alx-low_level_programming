#include "lists.h"

/**
 * free_dlistint - frees dlistint
 *
 * @head: head
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
