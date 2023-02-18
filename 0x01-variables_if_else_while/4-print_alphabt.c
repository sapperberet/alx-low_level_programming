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
char car;

for (car = 'a'; car <= 'z'; car++)
{
if ((car != 'q') && (car != 'e'))
{
	putchar(car);
}
}
putchar('\n');
return (0);
}
