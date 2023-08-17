#include "lists.h"

/**
 * sum_dlistint - sums all data
 *
 * @head: head
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
