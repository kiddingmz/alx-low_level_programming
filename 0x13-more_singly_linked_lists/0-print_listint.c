#include "lists.h"

/**
 * print_listint - print all elements
 *
 * @h: struct
 *
 * Return: unsigned int
 */
size_t print_listint(const listint_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);
	len = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
