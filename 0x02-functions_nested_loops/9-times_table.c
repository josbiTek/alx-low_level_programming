#include "main.h"

/**
 * time_table - print table 9 times table from 0
 */
void time_tables(void)
{
	int x, y, k;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{ 
			k = x * y;
			if (y == 0)
				_putchar(k + '0');
			if (y != 0 && k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
