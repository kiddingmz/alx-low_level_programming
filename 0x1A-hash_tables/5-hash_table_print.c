#include "hash_tables.h"

/**
 * hash_table_print - print key/values of hash table in order
 *
 * @ht: hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *sep;

	if (!ht || !ht->array)
		return;

	putchar('{');
	i = 0;
	sep = "";
	while (i < ht->size)
	{
		node = ((ht->array)[i]);
		while (node)
		{
			printf("%s'%s': '%s'", sep, node->key, node->value);
			sep = ", ";
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
