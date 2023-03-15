#include "main.h"

/**
 * _strcmp - entry point
 * @s1: str1
 * @s2: str2
 * Return: 0 or 1 or -1
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
	if (*s1 == '\0')
	{
		return (0);
	}
	s1++;
	s2++;
}
	return (*s1 - *s2);
}
