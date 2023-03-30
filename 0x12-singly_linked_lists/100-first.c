#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - entry point
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
