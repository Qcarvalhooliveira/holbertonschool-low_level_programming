#include "hash_tables.h"

/**
 * hash - function that adds an element to the hash table
 * @key:the key. key can not be an empty string
 * @size: the size of
 * Return: 1 if it succeeded, 0 otherwise
 */

unsigned long int hash(const char *key, unsigned long int size)
{
	unsigned long int hashval = 0;
	int i;

	for (i = 0; key[i] != '\0'; i++)
	{
	hashval = key[i] + (hashval << 5) - hashval;
	}
	return (hashval % size);
}
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	hash_node_t *node;

	hash_node_t *new_node;

	index = hash(key, ht->size);

	node = ht->array[index];

	if (ht == NULL || key == NULL || *key == '\0')
	{
	return (0);
	}

	while (node != NULL)
	{

	if (strcmp(node->key, key) == 0)
	{
	free(node->value);
	node->value = strdup(value);
	return (1);
	}
	node = node->next;
	}
	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
	return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
