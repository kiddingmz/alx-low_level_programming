#include "lists.h"

/**
 * delete_nodeint_at_index - delete element give position
 *
 * @head: struct
 * @index: index
 *
 * Return: listint_t
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *tmp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	i = 0;
	aux = *head;
	while (aux != NULL && i < index)
	{
		tmp = aux;
		aux = aux->next;
	}
	if (aux == NULL)
		return (-1);
	if (index > 0)
	{
		tmp->next = aux->next;
		*head = tmp;
		free(aux);
		return (1);
	}
	*head = (*head)->next;
	free(aux);
	return (1);
}
