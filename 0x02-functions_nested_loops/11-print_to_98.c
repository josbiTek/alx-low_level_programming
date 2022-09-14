#include <stdio.h>
#include "main.h"


/**
 * print from n_to_98 of natural numbers
 * @n: the entry point
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; --count)
			printf("%d, ", count);
	else
		for (count = n; count <98; ++count)
			printf("%d,", count);
	print("98\n");
}
