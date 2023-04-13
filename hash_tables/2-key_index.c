#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 * @key: key
 * @size: size of the array of the hash table
 * this function should be compiled with 1-djb2.c
 * Return: index at which the key/value pair should be stored in the array
 * of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
