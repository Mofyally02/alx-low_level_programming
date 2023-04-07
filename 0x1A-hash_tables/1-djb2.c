#include "hash_tables.h"

/**
 * key_index - Returns the index of a key
 * @key: The key to get the index for
 * @size: The size of the hash table's array
 *
 * Return: The index of the key/value pair in the hash table's array
 */
unsigned long int hash_djb2(const unsigned char *str)
{
        unsigned long int hash;
        int c;

        hash = 5381;
        while ((c = *str++))
                hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

        return (hash);
}
