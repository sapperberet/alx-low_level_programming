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
	int i;
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	
	for (i = 0 ; i < 26; i++)
		putchar(alp[i]);
	putchar('\n');
	return (0);
}
