#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht)
	{
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{

	node = ht->array[index];

	while (node)
	{

	if (strcmp(node->key, (char *)key) == 0)
	return (node->value);
	node = node->next;
	}
	}
	}
	return (NULL);
}
