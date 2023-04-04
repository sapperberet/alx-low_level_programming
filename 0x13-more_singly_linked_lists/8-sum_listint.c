#include "lists.h"

/**
 * sum_listint - entry point
 * @head: first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *change = head;

	while (temp)
	{
		sum += change->n;
		change = change->next;
	}

	return (sum);
}
