#include "lists.h"

/**
* print_dlistint - Function that prints all the elements of a dlistint_t list.
* @h: The head of the dlistint_t list.
* Return: The number of nodes in the list.
*/
size_t print_dlistint(const dlistint_t *h)
{
	int number_of_nodes = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		number_of_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (number_of_nodes);
}
