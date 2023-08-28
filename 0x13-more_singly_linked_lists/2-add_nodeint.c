#include "lists.h"

/**
 * add_nodeint - function that adds new node at the beginning of a
 * listint_t list
 * @head: the head node of the list
 * @n: the data to add to the node
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (0);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
