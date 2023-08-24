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
 * add_node_end - function that adds node to the end of
 * list_t list
 * @head: address of the node
 * @str: string to be added
 * Return: address of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;
	new_node->next = NULL;

	return (new_node);
}
