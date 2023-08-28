#include "lists.h"

/**
 * listint_len - function that returns the number of elements in linked
 * listint_t list
 * @h: pointer to start of the list
 * Return: THe number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int count;

	if (!h)
		return (0);

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}

	return (count);
}
