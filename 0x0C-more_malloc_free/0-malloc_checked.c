#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - entry point
 * @b: num
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
void *str;

str = malloc(b);

if (str == NULL)
	exit(98);

return (str);
}
