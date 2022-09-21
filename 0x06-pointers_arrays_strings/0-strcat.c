#include "main.h"

/**
 * _strcat -> this is function to concatenate
 * @dest: first parameter
 * @src: second parameter
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	char dest[] = "Hi ";

	char src[] = "Dear!";

	strcat(dest, src);
	_putchar("Concatenated string: %s\n", dest);
	return	(0);
}
