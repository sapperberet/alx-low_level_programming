#include "main.h"

/**
 *  _isalpha - Entry point
 *   @c: the character to check
 *  Description: 'the program's description'
 *  Return: Always 0 (Success)
 */
int _isalpha(int c)
{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
