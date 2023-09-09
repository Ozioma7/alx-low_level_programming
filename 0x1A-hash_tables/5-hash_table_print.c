#include "hash_tables.h"

/**
 * hash_table_print - function to print the hash table
 * @ht: pointer to hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *node;
	int nf = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (nf)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			nf = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
