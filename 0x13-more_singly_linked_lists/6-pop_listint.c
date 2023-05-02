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
	listint_t *aux;

	if ((*head) == NULL)
		return (0);
	data = (*head)->n;
	aux = (*head);
	*head = (*head)->next;
	free(aux);
	return (data);
}
