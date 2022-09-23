#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: the desired size of the hash table
 *
 * Return: pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(*ht));

	if (ht)
	{
		ht->array = calloc(size, sizeof(*ht->array));
		if (ht->array)
		{
			ht->size = size;
			return (ht);
		}
		free(ht);
	}
	return (NULL);
}

