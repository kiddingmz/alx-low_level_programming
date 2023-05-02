#include "lists.h"

/**
 * add_nodeint_end - add a new node end
 *
 * @head: struct
 * @n: int
 *
 * Return: list_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
		(*head) = new;
	else
	{
		aux = *head;
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new;
	}
	return (new);
}
