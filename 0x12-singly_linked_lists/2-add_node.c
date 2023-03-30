#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - entry point
 * @head: 2xpointer
 * @str:string to be added
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int len = 0;

	while (str[len])
		len++;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = (*head);
	(*head) = ptr;

	return (*head);
}
