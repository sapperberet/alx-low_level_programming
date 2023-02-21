#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
long int i, j, k, next;

j = 1;

k = 2;

for (i = 1; i <= 50; ++i)
{
	if (i == 50)
	{
		printf("%ld, ", j);
	} else
	{
		printf("%ld\n", j);
	}
	next = j + k;
	j = k;
	k = next;
}
return (0);
}
