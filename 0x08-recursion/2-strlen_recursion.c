#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - a func that prints the length if a string
 * @s: the string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return	(0);
	return (1 + _strlen_recursion(++s));
}
