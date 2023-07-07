#include "hash_tables.h"
/**
  * hash_table_print - prints the hash table
  * @ht: the hash table to print
  * Return: void
  */
void hash_table_print(const hash_table_t *ht)
{
	int i;
	hash_node_t *node;
	char *comma = "";

	if (ht == NULL || !ht->array)
	{
		return;
	}
	else
	{
		printf("{");
		for (i = 0; i < (int) ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				node = ht->array[i];
				while (node)
				{
					printf("%s'%s': '%s'", comma, node->key, node->value);
					comma = ", ";
					node = node->next;
				}
			}
		}
		printf("}");
		printf("\n");
	}
}	
