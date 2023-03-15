#include <stdlib.h>
#include "main.h"

/**
 * *create_array - entry point
 * @size: int
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i = 0;

if (size == 0)
	return (NULL);

arr = (char *) malloc(sizeof(char) * size);

if (arr == NULL)
	return (0);

while (i < size)
{
	*(arr + i) = c;
	++i;
}

*(arr + i) = '\0';

return (arr);
}
