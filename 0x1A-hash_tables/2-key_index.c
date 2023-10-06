#include "hash_tables.h"

/**
 * key_index - Get index at which a key/value
 *      pair should be stored in array of hash table.
 * @key: This is tThe key to get the index of.
 * @size: This is the size of the array of the hash table.
 *
 * Return: Return the index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
