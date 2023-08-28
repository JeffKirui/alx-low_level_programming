#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of the linked list
 * @head: pointer to the head node
 * @index: index of the node
 * Return: the data at the nth node, else NULL if node doe not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int counter = 0;

	current = head;
	while (current)
	{
		if (counter == index)
		{
			return (current);
		}
		counter++;
		current = current->next;
	}
	return (current);
}
