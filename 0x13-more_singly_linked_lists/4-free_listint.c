#include "lists.h"

/**
 * free_listint - entry point
 * @head: first noe
 */
void free_listint(listint_t *head)
{
	listint_t *ch;

	while (head)
	{
		ch = head->next;
		free(head);
		head = ch;
	}
}
