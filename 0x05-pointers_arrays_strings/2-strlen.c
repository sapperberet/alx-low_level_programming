#include "main.h"

/**
 * _strlen - entry point
 * @s: string
 * Return: size of str
 */
int _strlen(char *s)
{
int size;
size = 0;

while (s[size] != '\0')
{
	size++;
}

return (size);
}
