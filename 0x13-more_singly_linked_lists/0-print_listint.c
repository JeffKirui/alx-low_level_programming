#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: takes in a const struct type *h
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count;

	if (!h)
	{
		return (0);
	}

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
