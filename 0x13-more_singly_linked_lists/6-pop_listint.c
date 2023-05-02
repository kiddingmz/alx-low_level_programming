#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t
 *
 * @head: struct
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int data;

	if ((*head) == NULL)
		return (0);
	data = (*head)->n;
	*head = (*head)->next;
	return (data);
}
