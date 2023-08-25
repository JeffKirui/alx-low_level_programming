#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: the beginning of the list to be freed.
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
