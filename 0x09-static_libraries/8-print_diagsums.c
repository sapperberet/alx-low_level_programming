#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - entry point
 * @a: arr of ints
 * @size: size int
 */
void print_diagsums(int *a, int size)
{
int i;

unsigned int sum, sum1;

sum = 0;
sum1 = 0;

for (i = 0; i < size; i++)
{
	sum = sum + a[(size * i) + i];
	sum1 = sum1 + a[(size * (i + 1)) - (i + 1)];
}

printf("%d, %d\n", sum, sum1);
}
