#include "hash_tables.h"

/**
  * hash_table_get - Gets an item from the hash function
  * @ht: hash table to work with
  * @key: key to find
  * Return: the value of the associated key
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int hash_val;
	hash_node_t *ptr;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);

	hash_val = (int) key_index((const unsigned char *)key, ht->size);

	if (ht->array[hash_val] == NULL)
		return (NULL);

	ptr = ht->array[hash_val];

	while (ptr != NULL)
	{
		if (ptr->key == key)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (ptr);
}
