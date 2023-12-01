#include "hash_tables.h"

/**
  * hash_table_delete - Function that deletes a hash table
  * @ht: the hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned int index;

	index = 0;

	node = ht->array[index];

	tmp = node;

	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			/* save the next to tmp ptr*/
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			/* reassign tmp to the node */
			node = tmp;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
