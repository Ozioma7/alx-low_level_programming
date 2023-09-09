#include "hash_tables.h"

/**
 * key_index - Get the index at which a keys and
 * values should be stored in hash table.
 * @key: The key
 * @size: The size of the hash table.
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
