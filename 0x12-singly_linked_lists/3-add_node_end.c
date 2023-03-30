#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - entry point
 * @head: 2x pointer 
 * @str: char *
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *change = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (change->next)
		change = change->next;

	change->next = ptr;

	return (ptr);
}
