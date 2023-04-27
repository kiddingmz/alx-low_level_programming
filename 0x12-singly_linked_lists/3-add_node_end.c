#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a new node end
 *
 * @head: struct
 * @str: string
 *
 * Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *aux;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
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
