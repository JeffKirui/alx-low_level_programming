#include "hash_tables.h"

/**
  * hash_table_print - Function that prints a hash table
  * @ht: the hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index;
	char *flag = "";

	index = 0;
	if (ht == NULL)
		return;
	printf("{");
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			printf("%s", flag);
			printf("'%s': '%s'", node->key, node->value);
			flag = ", ";
			node = node->next;
		}
		index++;
	}
	printf("}\n");
}
