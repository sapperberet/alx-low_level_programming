#include "main.h"

/**
 * rev_string - entry point
 * @s: string 
 */
void rev_string(char *s)
{
char temp;
int i, len, len2;

len = 0;
len2 = 0;

while (s[len] != '\0')
{
	len++;
}

len2 = len - 1;

for (i = 0; i < len / 2; i++)
{
	temp = s[i];
	s[i] = s[len2];
	s[len2--] = temp;
}
}
