#include "hash_tables.h"

/**
 * hash_table_set - add an element in a hash table
 *
 * @ht: pointer to hash table
 * @key: key to add
 * @value: value
 *
 * Return: integer
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
