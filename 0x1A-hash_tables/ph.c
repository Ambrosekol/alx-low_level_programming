#include "hash_tables.h"

void ph(hash_table_t *ht)
{
	int i;
	hash_node_t *node;

	if (ht == NULL)
		printf("____There are no entries here_____\n");

	printf("==============================\n");
	for (i = (int) ht->size; i >= 0; i--)
	{
		if (ht->array[i] == NULL)
		{
			printf("There are no entries in bucket %d\n", i);
		}
		else
		{
			node = ht->array[i];
			while (node != NULL)
			{
				printf("%s    -", node->key);
				node = node->next;
			}
			printf("\n");
		}
	}
}	
