#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ character appears
 * should be printed
 */

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChhr = 1; lnchr <= n; ++lnChr)
			_putchar('_');
		_putchar('\n');
	}
}
