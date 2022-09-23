#include "hash_tables.h"

/**
 * key_index - gets the hash table index mapped to by a given key
 * @key: the key to hash
 * @size: the size of the hash table
 *
 * Return: index mapped to by key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}


