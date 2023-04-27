#include "lists.h"

/**
 * free_list - frees a list_t
 *
 * @head: struct
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *aux;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
}
