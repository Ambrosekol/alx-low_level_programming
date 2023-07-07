#include "hash_tables.h"

/**
 * key_index - this finds the key index
 * @key: they key to an index
 * @size: Size of the array of hash table
 * Return: returns the index of found key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h_code;

	if (key == NULL || size == 0)
		return (0);
	h_code = hash_djb2(key);
	return (h_code % size);
}
