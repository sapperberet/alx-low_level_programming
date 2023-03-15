#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - entry point
 * @width: W
 * @height: L
 * Return: ptr
 */
int **alloc_grid(int width, int height)
{
int **vec;
int i, j;

if (height <= 0 || width <= 0)
	return (NULL);

vec = (int **) malloc(sizeof(int *) * height);

if (vec == NULL)
	return (NULL);

for (i = 0; i < height; i++)
{
	vec[i] = (int *) malloc(width * sizeof(int));
	if (vec[i] == NULL)
	{
		free(vec);
		for (j = 0; j <= i; j++)
			free(vec[j]);
		return (NULL);
	}
}

for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
	{

		vec[i][j] = 0;
	}
}
return (vec);
}
