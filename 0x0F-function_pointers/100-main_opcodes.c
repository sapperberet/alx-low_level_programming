#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: num
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sec, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	sec = atoi(argv[1]);

	if (sec < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < sec; i++)
	{
		if (i == sec - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
