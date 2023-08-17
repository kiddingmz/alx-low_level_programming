#include "lists.h"

/**
 * dlistint_len - print all elements
 *
 * @h: list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_nodes;

	n_nodes = 0;
	if (h == NULL)
		return (n_nodes);

	while (h)
	{
		h = h->next;
		n_nodes++;
	}

	return (n_nodes);
}
