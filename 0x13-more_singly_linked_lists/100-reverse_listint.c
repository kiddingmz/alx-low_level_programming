#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t list
 * @head: struct
 *
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux, *tmp;

	if (head == NULL || (*head) == NULL)
		return (NULL);
	tmp = NULL;
	while ((*head)->next != NULL)
	{
		aux = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = aux;
	}

	(*head)->next = tmp;

	return (*head);
}
