#include "hash_tables.h"
/**
  * hash_table_create - This function creates an Hash table
  * @size: This is the size of the Hash Table to be created
  * Return: A new Hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t *buckets;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	buckets = malloc(sizeof(hash_node_t) * size);
	if (buckets == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->array = &buckets;
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}
	return (new_table);
}
