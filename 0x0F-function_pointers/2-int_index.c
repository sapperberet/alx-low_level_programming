#include "function_pointers.h"

/**
 * int_index - entry point
 * @array: arr
 * @size: len arr
 * @cmp: ptr to cmp fn
 * Return: i after cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
