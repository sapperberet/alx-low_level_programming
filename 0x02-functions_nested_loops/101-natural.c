#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int sumof3, sumof5, sum;
int i;

sumof3 = 0;
sumof5 = 0;
sum = 0;

for (i = 0; i < 1024; ++i)
{
	if ((i % 3) == 0)
	{
		sumof3 = sumof3 + i;
	} else if ((i % 5) == 0)
	{
		sumof5 = sumof5 + i;
	}
}
sum = sumof3 + sumof5;
printf("%lu\n", sum);
return (0);
}
