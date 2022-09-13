#include "main.h"

/**
 * _islower - check for a lower character
 * @c: checks input of function
 * Return: return 1 if 'c' is lowercase
 * otherwise always 0 (Success)
 */
int _islower(int c)
{
	return	(c >= 'a' && c <= 'z');
}
