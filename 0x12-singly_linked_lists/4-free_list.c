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
	if (head == NULL)
		return;
	free(head);
}
