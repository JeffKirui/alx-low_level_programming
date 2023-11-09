#include "lists.h"

/**
 * get_dnodeint_at_index - FUnction that Locates a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 * Return: NULL if node does not exist, otherwise the address of located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int counter = 0;

	tmp = head;
	while (tmp != NULL)
	{
		if (counter == index)
			return (tmp);
		counter++;
		tmp = tmp->next;
	}
	return (tmp);
}
