#include "lists.h"

/**
 * free_listint2 - entry point
 * @head: ptr to list
 */
void free_listint2(listint_t **head)
{
	listint_t *fs;

	if (head == NULL)
		return;

	while (*head)
	{
		fs = (*head)->next;
		free(*head);
		*head = fs;
	}

	*head = NULL;
}
