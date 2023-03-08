#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - entry point
 * @n: int
 * Return: value
 */
int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - entry point
 * @n: int num
 * @i: int
 * Return: actual one for the equation above
 */
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
	return (-1);
if (i * i == n)
	return (i);
return (actual_sqrt_recursion(n, i + 1));
}
