#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argc: num
 * @argv: vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
int number, j, value;
int coin[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
	printf("Error\n");
	return (1);
}

number = atoi(argv[1]);
value = 0;

if (number < 0)
{
	printf("0\n");
	return (0);
}

for (j = 0; j < 5 && number >= 0; j++)
{
	while (number >= coin[j])
	{
		value++;
		number -= coin[j];
	}
}
printf("%d\n", value);
return (0);
}
