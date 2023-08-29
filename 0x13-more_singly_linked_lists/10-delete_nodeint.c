#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of a list
 * @head: double pointer to head of list
 * @index: index of node
 * Return: 1 if success, else -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *deleteNode;
	listint_t *tmp;
	unsigned int counter = 0;

	if (!head || *head == NULL)
		return (-1);

	tmp = *head;
	while (tmp)
	{
		if (index == counter + 1)
		{
			deleteNode = tmp->next;
			tmp->next = deleteNode->next;
			free(deleteNode);
			return (1);
		}
		if (index == 0)
		{
			*head = tmp->next;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		counter++;
	}
	return (-1);
}
