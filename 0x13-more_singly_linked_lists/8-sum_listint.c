#include "lists.h"

/**
 * sum_listint - function that sums the values of the list.
 * @head: A pointer to the first node of the list
 * Return: the sum, else 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int counter = 0;

	listint_t *node_index = head;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		counter += head->n;
		node_index = head->next;
		head = node_index;
	}
	return (counter);
}
