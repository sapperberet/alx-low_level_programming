#include "main.h"
#include <stdio.h>

/**
 * *_strchr - entry point
 * @s: string
 * @c: char
 * Return: pointer or null
 */
char *_strchr(char *s, char c)
{
int a;

while (1)
{
	a = *s++;
	if (a == c)
	{
		return (s - 1);
	}
	if (a == 0)
	{
		return (NULL);

	}
}
}
