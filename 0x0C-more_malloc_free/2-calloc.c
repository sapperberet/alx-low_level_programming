#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: num
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	s[i] = b;
	s[i] = 0;
}
return (s);
}

/**
 * *_calloc - entry point
 * @nmemb: size of 1D
 * @size: size of 2D
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *str;

if (nmemb == 0 || size == 0)
	return (NULL);

str = malloc(size * nmemb);

if (str == NULL)
	return (NULL);

_memset(str, 0, nmemb * size);

return (str);
}
