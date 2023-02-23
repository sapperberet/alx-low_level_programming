#include "main.h"

/**
 * print_line - entry point
 * @n: int of lines number
 */
void print_line(int n)
{
if (n <= 0)
{
	_putchar('\n');
}
else
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');																								}
	_putchar('\n');
}
}
