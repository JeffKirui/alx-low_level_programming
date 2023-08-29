#include "lists.h"

/**
 *insert_nodeint_at_index - insert a node at index
 *@head: head
 *@idx: index
 *@n: n
 *Return: sum of all the data
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *current;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (head && idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}

	current = *head;

	while (current)
	{
		if (counter + 1 == idx)
		{
			temp->next = current->next;
			current->next = temp;
			return (temp);
		}
		current = current->next;
		counter++;
	}
	free(temp);
	return (NULL);
}
