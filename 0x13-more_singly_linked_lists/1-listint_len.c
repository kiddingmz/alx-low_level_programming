#include "lists.h"

/**
 * listint_len - Return numbers of the elements in a linked list
 *
 * @h: linked list
 *
 * Return: unsigned int
 */

size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}

