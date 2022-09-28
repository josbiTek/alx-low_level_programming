#include "main.h"

/**
 * _puts_rev_recursion - a func that prints a string in reverse
 * @s: pointer to the string
 * Return: Always 0
 */

void _puts_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_putchar ('\n');
	}
	else
	{
		_puts_rev_recursion(s + 1);
		_putchar(*s);
	}

}
