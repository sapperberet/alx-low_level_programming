#include "main.h"

/**
 * puts_half - entry point
 * @str: str
 */
void puts_half(char *str)
{
int len, n;

len = 0;

while (str[len] != '\0')
{
	len++;
}

if (len % 2 == 0)
{
	for (n = len / 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
}
else
{
	for (n = (len - 1) / 2; n < len - 1; n++)
	{
		_putchar(str[n + 1]);
	}
}
_putchar('\n');
}
