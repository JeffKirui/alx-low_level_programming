#include "lists.h"

/**
 * pop_listint - function that deletes the head node & returns its data
 * @head: the head node of the list
 * Return: the data of the head node, else 0 if empty.
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *hold;

	if (*head == NULL)
		return (0);

	hold = *head;
	*head = hold->next;
	num = hold->n;
	free(hold);
	return (num);
}
