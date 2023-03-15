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
unsigned int len, i;

i = 0;
len = 0;

if (str == NULL)
	return (NULL);

while (str[len])
	len++;

second = malloc(sizeof(char) * (len + 1));

if (second == NULL)
	return (NULL);

while ((second[i] = str[i]) != '\0')
	i++;

return (second);
}
