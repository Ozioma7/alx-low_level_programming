#include "hash_tables.h"
/**
 * sorted_list - function for insert new node in sorted order
 * @ht: pointer to sorted hash table
 * @new_node: new node to insert
 */
void sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *snode = ht->shead;

	if (snode == NULL)
	{
		ht->shead = ht->stail = new_node;
		new_node->snext = new_node->sprev = NULL;
		return;
	}
	do {
		if (strcmp(new_node->key, snode->key) < 0)
		{
			new_node->snext = snode;
			new_node->sprev = snode->sprev;

			if (!snode->sprev)
				ht->shead = new_node;
			else
				snode->sprev->snext = new_node;
			snode->sprev = new_node;
			return;
		}
		snode = snode->snext;
	}
	while (snode);
	new_node->sprev = ht->stail;
	new_node->snext = ht->stail->snext;
	ht->stail->snext = new_node;
	ht->stail = new_node;
}

/**
 * shash_table_create - Function that
 * creates a sorted hash table.
 * @size: The size of the array.
 * Return: Pointer to the new hash table or NULL
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h_table;

	if (size == 0)
		return (NULL);

	h_table = calloc(1, sizeof(shash_table_t));
	if (h_table == NULL)
		return (NULL);

	h_table->size = size;
	h_table->array = calloc(size, sizeof(shash_node_t *));
	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}
	return (h_table);
}


/**
 * shash_table_set - Adding or updating an element in a
 * sorted hash table.
 * @ht: Pointer to the hash table.
 * @key: key, note: not an empty string.
 * @value: Value of the Key
 * Return: 1 or 0
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valuecopy, *keycopy;
	shash_node_t  *node, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);
	valuecopy = strdup(value);
	if (!valuecopy)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (!strcmp(key, node->key))
		{
			free(node->value);
			node->value = valuecopy;
			return (1);
		}
		node = node->next;
	}
	new_node = calloc(1, sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(valuecopy);
		return (0);
	}
	keycopy = strdup(key);
	if (!keycopy)
		return (0);
	new_node->key = keycopy;
	new_node->value = valuecopy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	sorted_list(ht, new_node);
	return (1);
}

/**
 * shash_table_get - Retrieve the key's value
 * @ht: Pointer to the hash table.
 * @key: The key
 * Return: The value or NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t  *node;

	if (!ht || !key || !*key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(key, node->key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - function to print the hash table
 * @ht: pointer to a sorted hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t  *node;
	int nf = 0;

	if (!ht)
		return;
	node = ht->shead;
	printf("{");

	while (node)
	{
		if (nf)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		nf = 1;
		node = node->next;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int nf = 0;

	if (!ht)
		return;
	node = ht->stail;
	printf("{");
	while (node)
	{
		if (nf)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		nf = 1;
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table and all nodes
 * @ht: pointer to hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node;
			node = node->next;
			if (tmp->key)
				free(tmp->key);
			if (tmp->value)
				free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
