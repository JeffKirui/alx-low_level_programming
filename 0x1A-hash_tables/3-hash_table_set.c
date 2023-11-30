#include "hash_tables.h"

/**
  * hash_table_set - Function that adds an element to the hash table
  * @ht: hash table
  * @key: key for the hash table
  * @value: value of the key
  * Return: 1 on success, 0 on fail
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *ptr;
	int index;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (1);
		}
		ptr = ptr->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		/* check if the key matches*/
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
