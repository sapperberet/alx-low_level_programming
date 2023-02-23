#include "main.h"

/**
 * print_triangle - entry point
 * @size: int max of nums
 */
void print_triangle(int size)
{
if (size <= 0)
{
	_putchar('\n');
}
else
{
	int x, y;


	for (x = 1; x <= size; x++)
	{
		for (y = i; y < size; y++)
		{
			_putchar(' ');
		}

		for (y = 1; y <= x; y++)
		{

			_putchar('#');

		}

		_putchar('\n');
	}
}
}
