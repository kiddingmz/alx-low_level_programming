#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node
 *
 * @head: struct
 * @str: string
 *
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = (*head);
	(*head) = new;

	return (new);
}
