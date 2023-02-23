#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers also an entry point
 * @a: first test
 * @b: second tested int
 * @c: third tested int
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;


if (a >= b && a >= c)
{
	largest = a;
}
else if (b >= a && b >= c)
{
	largest = b;
}
else
{
	largest = c;
}

return (largest);
}
