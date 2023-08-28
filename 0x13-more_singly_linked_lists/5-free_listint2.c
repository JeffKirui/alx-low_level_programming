#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list, sets @head to NULL
 * @head: double pointer to head of list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	while (head && *head)
	{
		hold = *head;
		*head = hold->next;
		free(hold);
	}
}
