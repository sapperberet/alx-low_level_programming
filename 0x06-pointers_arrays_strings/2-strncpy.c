#include "main.h"

/**
 * _strncpy - entry point
 * @dest: str2
 * @src: str1
 * @n: n of to cpy
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;

while (src[i] != '\0' && i < n)
{
	dest[i] = src[i];
	i++;
}
while (i < n)
{
	dest[i] = '\0';
	i++;
}

return (dest);
}
