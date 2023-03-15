#include "main.h"

/**
 * swap_int - entry point
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
