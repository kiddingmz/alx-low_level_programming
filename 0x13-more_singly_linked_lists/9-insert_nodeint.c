#include "lists.h"

/**
 * insert_nodeint_at_index - add a new node give position
 *
 * @head: struct
 * @idx: index
 * @n: element
 *
 * Return: listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *aux, *tmp;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if ((*head) == NULL && idx == 0)
		(*head) = new;
	else
	{
		aux = *head;
		i = 0;
		while (aux != NULL && i++ < idx)
		{
			tmp = aux;
			aux = aux->next;
		}
		if (aux == NULL)
			return (NULL);
		if (idx == 0)
		{
			new->next = (*head);
			*head = new;
			return (new);
		}
		new->next = aux;
		tmp->next = new;
	}
	return (new);
}
