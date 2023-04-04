#include "lists.h"

/**
 * pop_listint - entry point
 * @head: ptr to first
 * Return: deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *fs;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	fs = (*head)->next;
	free(*head);
	*head = fs;

	return (num);
}
