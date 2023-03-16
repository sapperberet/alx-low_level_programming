#include <stdlib.h>
#include "main.h"

/**
 * *array_range - entry point
 * @min: min range
 * @max: max range
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
int *str;
int i, size;

if (min > max)
	return (NULL);

size = max - min + 1;

str = malloc(sizeof(int) * size);

if (str == NULL)
	return (NULL);

for (i = 0; min <= max; i++)
	str[i] = min++;

return (str);
}
