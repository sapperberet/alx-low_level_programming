#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argc: num
 * @argv: vector
 * Return: 1
 */

int main(int argc, char *argv[])
{
int i, num;

if (argc < 3 || argc > 3)
{
	printf("Error\n");
	return (1);
}
else
{
	num = 1;

	for (i = 1; i < 3; i++)
		num *= atoi(argv[i]);

	printf("%d\n", num);
}

return (0);
}
