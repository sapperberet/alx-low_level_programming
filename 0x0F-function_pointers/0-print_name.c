#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - entry point
 * @name: str
 * @f: ptr to fn
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
