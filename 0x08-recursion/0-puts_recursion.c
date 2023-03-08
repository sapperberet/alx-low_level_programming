#include "main.h"

/**
 * _puts_recursion - entry point
 *@s: str
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
	return (0);
}
_putchar(*s);
_puts_recursion(s + 1);
}
