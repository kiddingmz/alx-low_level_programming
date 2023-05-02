#include "lists.h"

/**
 * free_listint - frees a listint_t
 *
 * @head: struct
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *aux;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
