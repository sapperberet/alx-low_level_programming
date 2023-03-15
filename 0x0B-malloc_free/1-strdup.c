#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - entry point
 * @str: string
 * Return: ptr
 */
char *_strdup(char *str)
{
char *second;
unsigned int len;

len = 0;

if (str == NULL)
	return (NULL);

while (str[len])
	len++;

second = malloc(sizeof(char) * (len + 1));

if (second == NULL)
	return (NULL);

return (second);
}
