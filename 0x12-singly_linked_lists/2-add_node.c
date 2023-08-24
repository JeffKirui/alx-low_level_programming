#include "lists.h"

/**
 * _strlen - function to count length of the string
 * @str: string whose length to return
 * Return: length of the string
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}

	return (i);
}

/**
 * add_node - function that adds a new node at the beginning of
 * list_t list
 * @head: address of node
 * @str: string to be added
 * Return: address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
	{
		return (0);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
