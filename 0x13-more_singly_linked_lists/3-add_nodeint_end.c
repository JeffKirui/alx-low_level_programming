#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of listint_t list
 * @head: beginning of the list
 * @n: the data to be added
 * Return: the address of the element, or NULL if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	new_node->next = NULL;

	return (new_node);
}
