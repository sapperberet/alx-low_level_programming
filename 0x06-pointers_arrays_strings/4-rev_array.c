#include "main.h"

/**
 * reverse_array - entry point
 * @a: list
 * @n: size
 */
void reverse_array(int *a, int n)
{
int i, j, z;

j = n - 1;

for (i = 0; i < n / 2; i++)
{
	z = a[i];
	a[i] = a[j];
	a[j--] = z;
}
}
