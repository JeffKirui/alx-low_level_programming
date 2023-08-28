#include "lists.h"

/**
 * pop_listint - function that deletes the head node & returns its data
 * @head: the head node of the list
 * Return: the data of the head node, else 0 if empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *hold;

	if (*head == NULL)
		return (0);

	hold = *head;
	*head = hold->next;
	n = hold->n;
	free(hold);
	return (n);
}
