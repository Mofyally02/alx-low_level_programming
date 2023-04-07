#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - Returns the index of a key
 * @key: The key to get the index for
 * @size: The size of the hash table's array
 *
 * Return: The index of the key/value pair in the hash table's array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

	return (hash_value % size);
}
