#include "hash_tables.h"

/**
 * key_index - generate the index
 *
 * @key: key
 * @size: size of the hash table
 *
 * Return: key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
