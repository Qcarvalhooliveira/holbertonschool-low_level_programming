#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 * Prints the key/value in the order that they appear in
 * the array of hash table
 * If ht is NULL, don’t print anything
 * format : {'key': 'value',...}
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned long int size;
	unsigned int n;
	hash_node_t *node;

	i = 0;
	n = 0;

	if (ht == NULL)
	return;

	size = ht->size;
	printf("{");

	for (i = 0; i < size; i++)
	{
	if (ht->array[i] != NULL)
	{

	node = ht->array[i];

	while (node)
	{
	if (n > 0)
	printf(", ");
	printf("'%s': ", node->key);
	printf("'%s'", node->value);
	n++;
	node = node->next;
	}
	}
	}
	printf("}\n");
}
