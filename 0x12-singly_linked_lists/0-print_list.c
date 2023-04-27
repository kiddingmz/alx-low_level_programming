#include "lists.h"

/**
 * print_list - print all elements
 *
 * @h: struct
 *
 * Return: unsigned int
 */

size_t print_list(const list_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);
	len = 1;
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (len);
}
