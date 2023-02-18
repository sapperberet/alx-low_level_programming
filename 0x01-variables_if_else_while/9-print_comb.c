#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
int nbr;

for (nbr = 48; nbr < 58; nbr++)
{
putchar(nbr);
if (nbr != 57)
{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}
