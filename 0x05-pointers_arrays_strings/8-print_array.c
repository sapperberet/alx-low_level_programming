#include <stdio.h>
#include "main.h"

/**
 * print_array - entry point
 * @a: array
 * @n: n of elements
 */
void print_array(int *a, int n)
{
int j;

for (j = 0; j < n; j++)
{
	if (j == 0)
		printf("%d", a[j]);
	else
		printf(", %d", a[j]);
}
printf("\n");
}
