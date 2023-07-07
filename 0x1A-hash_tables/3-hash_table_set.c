#include "hash_tables.h"

/**
 * hash_table_set - This sets the harsh table with values
 * @ht: this hives the hadh tabke to use
 * @key: key of harsh table
 * @value: data to input into hash table
 * Return: 1 if successful else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *cursor;
	char buffer1[1024];

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = (char *)key;
	strcpy(buffer1, value);
	node->value = buffer1;
	node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
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
