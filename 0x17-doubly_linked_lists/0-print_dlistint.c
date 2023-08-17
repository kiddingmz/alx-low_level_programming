#include "lists.h"

/**
 * print_dlistint - print all elements
 *
 * @h: list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes;

	n_nodes = 0;
	if (h == NULL)
		return (n_nodes);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}

	return (n_nodes);
}
