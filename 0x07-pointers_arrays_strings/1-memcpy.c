#include "main.h"

/**
 * *_memcpy - entry point
 * @dest: string
 * @src: string
 * @n: size
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
