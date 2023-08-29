#include "lists.h"

/**
 *insert_nodeint_at_index - insert a new node at index
 *@head: double pointer to head node
 *@idx: index of the list where the new node should be added
 *@n: the data to enter for the new node
 *Return: address of the new node, else NULL if failed
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
