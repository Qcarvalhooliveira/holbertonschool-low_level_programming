#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key:the key. key can not be an empty string
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *current;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
	current = ht->array[index];
	while (current)
	{
	if (strcmp(current->key, (char *)key) == 0)
	{
	free(current->value);

	current->value = (char *) strdup(value);

	return (1);
	}

	current = current->next;
	}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	return (0);
	node->key = (char *)strdup(key);
	if (node->key == NULL)
	{
	free(node);

	return (0);
	}
	node->value = (char *)strdup(value);
	if (node->value == NULL)
	{
	free(node->key);
	free(node);
	return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
