#include "hash_tables.h"

/*
 * hash_table_set - this sets the harsh table with values
 * @ht: this hives the hadh tabke to use
 * @key: key of harsh table
 * @value: data to input into hash table
 * Return: 1 if successful else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *cursor;
	char buffer[1024];

	if (key == NULL || ht == NULL)
		return (0);

	node->key = key;
	strcpy(buffer, value);
	node->value = buffer;
	node->next = NULL;

	index = key_index(key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}

	cursor = ht->array[index];
	while (cursor->next != NULL)
	{
		cursor = cursor->next;
	}
	cursor->next = node;
	return (1);
}
