#include "main.h"

/**
 * *_memcpy - entry point
 * @dest: string 1
 * @src:  string 2
 * @n: int
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}

return (dest);
}
